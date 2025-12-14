#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)9;
_Bool var_5 = (_Bool)1;
unsigned int var_10 = 667526720U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)231;
unsigned short var_17 = (unsigned short)16936;
_Bool var_18 = (_Bool)1;
short arr_5 [15] [15] ;
unsigned int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-14686;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 1993274441U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
