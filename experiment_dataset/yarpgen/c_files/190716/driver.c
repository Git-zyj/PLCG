#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1411974736U;
signed char var_1 = (signed char)111;
int var_2 = 577396574;
unsigned short var_3 = (unsigned short)33046;
unsigned short var_4 = (unsigned short)20923;
long long int var_5 = -1405103879801504780LL;
_Bool var_6 = (_Bool)1;
int var_7 = 179374645;
unsigned short var_8 = (unsigned short)44922;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 16599328739036564032ULL;
int var_12 = -1439410010;
int var_13 = -997453425;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = -6289816074681428586LL;
unsigned long long int var_16 = 13558359736177423124ULL;
int var_17 = -545978765;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1162132715U;
int var_20 = -944945135;
int var_21 = -755386627;
unsigned long long int var_22 = 13127869063553617849ULL;
unsigned short arr_2 [22] ;
long long int arr_6 [22] [22] ;
int arr_10 [15] [15] ;
unsigned long long int arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)35504;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 2785227491214101107LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 2128654400 : -155956082;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1517060355318827175ULL : 13795326603816841590ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
