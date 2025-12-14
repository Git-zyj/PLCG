#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_7 = -908348381;
unsigned char var_10 = (unsigned char)101;
unsigned long long int var_12 = 4193896854463843555ULL;
unsigned short var_13 = (unsigned short)884;
signed char var_14 = (signed char)115;
int zero = 0;
long long int var_18 = -4100069373393178682LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3448787680U;
unsigned short arr_2 [13] ;
int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)41297;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 705348396;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
