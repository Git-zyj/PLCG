#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 536480145U;
_Bool var_7 = (_Bool)0;
unsigned short var_13 = (unsigned short)37112;
int var_14 = -894957987;
_Bool var_16 = (_Bool)0;
int var_18 = -1894643002;
int zero = 0;
int var_19 = 350366854;
int var_20 = 542099715;
unsigned short var_21 = (unsigned short)23893;
unsigned int var_22 = 3103001497U;
unsigned int var_23 = 3597928273U;
unsigned long long int var_24 = 1509121451526663563ULL;
unsigned short var_25 = (unsigned short)37166;
unsigned int var_26 = 1553046419U;
_Bool var_27 = (_Bool)1;
int var_28 = -589965992;
unsigned short arr_1 [18] [18] ;
unsigned int arr_6 [18] [18] [18] ;
int arr_13 [18] ;
unsigned short arr_2 [18] [18] ;
int arr_3 [18] ;
unsigned int arr_19 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)27646;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3839451839U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = -444717810;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)36428;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -1925758858;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = 163658877U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
