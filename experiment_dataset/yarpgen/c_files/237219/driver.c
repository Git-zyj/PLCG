#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3714981959401711600LL;
long long int var_1 = -416132333504693740LL;
unsigned int var_2 = 751244793U;
long long int var_3 = -7989011394560177662LL;
unsigned char var_6 = (unsigned char)25;
unsigned long long int var_7 = 17566597523174621502ULL;
unsigned long long int var_8 = 18159935812052126510ULL;
signed char var_9 = (signed char)40;
unsigned int var_10 = 400846901U;
unsigned short var_11 = (unsigned short)33682;
long long int var_13 = 8649071176280088344LL;
int zero = 0;
signed char var_14 = (signed char)-114;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3379165515U;
unsigned long long int var_17 = 13788602971605018077ULL;
unsigned long long int var_18 = 1402674905801477794ULL;
short var_19 = (short)30984;
unsigned int arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned long long int arr_4 [14] ;
_Bool arr_5 [14] [14] ;
unsigned int arr_6 [14] [14] ;
unsigned int arr_7 [14] ;
short arr_2 [13] ;
unsigned short arr_3 [13] ;
signed char arr_8 [14] [14] ;
unsigned short arr_9 [14] ;
unsigned char arr_10 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2029775691U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2333360073U : 2441606435U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 9049683685612523404ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 866274938U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 3376776937U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-8067 : (short)-14398;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7935 : (unsigned short)51879;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-23 : (signed char)78;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42518 : (unsigned short)43823;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)235 : (unsigned char)211;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
