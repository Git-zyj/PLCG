#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8776359862132880901ULL;
unsigned int var_3 = 1794751289U;
unsigned long long int var_8 = 14660818621994942866ULL;
long long int var_9 = -5505669675850181845LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -6843538517086858758LL;
unsigned char var_13 = (unsigned char)118;
long long int var_14 = 7769501052883316646LL;
short var_15 = (short)16839;
unsigned short arr_0 [23] ;
_Bool arr_1 [23] ;
_Bool arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)51616;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
