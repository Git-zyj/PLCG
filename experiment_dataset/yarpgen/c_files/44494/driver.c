#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3308463231U;
int var_3 = 59139304;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3022376298U;
int var_6 = -1217847464;
unsigned short var_8 = (unsigned short)35207;
unsigned int var_9 = 1249326298U;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2561869497U;
int zero = 0;
long long int var_12 = 8262508246252224068LL;
unsigned int var_13 = 942572430U;
int var_14 = 644421777;
unsigned int var_15 = 4081396704U;
unsigned int var_16 = 681995273U;
unsigned char var_17 = (unsigned char)92;
short var_18 = (short)-6885;
unsigned short arr_0 [18] ;
int arr_2 [18] ;
unsigned int arr_3 [18] ;
_Bool arr_4 [18] ;
int arr_5 [18] ;
signed char arr_12 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)753;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1656658676 : -2034269159;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1523842419U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -1489418431;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-110 : (signed char)-11;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
