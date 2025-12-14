#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
short var_3 = (short)-22669;
_Bool var_7 = (_Bool)1;
int var_9 = 406595848;
int var_12 = -1527474313;
unsigned long long int var_17 = 13351429491055419086ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -453881117;
unsigned long long int var_21 = 9021425637973160530ULL;
unsigned int var_22 = 3979709651U;
int var_23 = -34526553;
int var_24 = -987121080;
unsigned long long int arr_5 [20] [20] ;
int arr_6 [20] ;
unsigned long long int arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 8575392918693584197ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -150143891;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 3262282956740299376ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
