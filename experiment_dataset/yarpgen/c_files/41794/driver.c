#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_11 = (_Bool)0;
short var_15 = (short)12770;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-1244;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 2636321921U;
unsigned int var_21 = 2606800472U;
unsigned int var_22 = 1078912926U;
unsigned int var_23 = 344324632U;
_Bool var_24 = (_Bool)1;
short arr_0 [11] ;
_Bool arr_1 [11] ;
unsigned int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)8164;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 3114757829U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
