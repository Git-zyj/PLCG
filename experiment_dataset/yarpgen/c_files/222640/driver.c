#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45863;
int var_5 = 788048008;
long long int var_10 = -7826455573882034480LL;
unsigned short var_17 = (unsigned short)55184;
int zero = 0;
int var_18 = 1964025395;
unsigned short var_19 = (unsigned short)18253;
unsigned int arr_1 [24] ;
unsigned short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3716330331U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)58158;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
