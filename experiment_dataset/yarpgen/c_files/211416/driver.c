#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-6700;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned int var_13 = 777897168U;
int zero = 0;
unsigned long long int var_14 = 3469403680230925503ULL;
signed char var_15 = (signed char)-122;
unsigned int var_16 = 510016153U;
short var_17 = (short)-11531;
long long int var_18 = 8185362681953396351LL;
long long int var_19 = -1179537088753438480LL;
signed char arr_5 [15] [15] [15] ;
_Bool arr_8 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
