#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2552754375U;
int var_2 = -1961056872;
unsigned short var_3 = (unsigned short)34162;
unsigned short var_4 = (unsigned short)48264;
long long int var_6 = 8722235127563294266LL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)11462;
int var_15 = -434037641;
short var_16 = (short)32466;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_19 = 123387860;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2921844099U;
long long int var_22 = 778687577483122347LL;
unsigned int var_23 = 141185796U;
unsigned int arr_0 [19] ;
int arr_1 [19] ;
unsigned short arr_3 [19] [19] ;
long long int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1992955663U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -1270864000;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)32435;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 8921705173309738758LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
