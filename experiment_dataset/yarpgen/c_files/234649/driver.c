#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20389;
unsigned char var_5 = (unsigned char)201;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 11577787867142213847ULL;
short var_11 = (short)-1323;
unsigned short var_13 = (unsigned short)31148;
unsigned char var_14 = (unsigned char)85;
unsigned long long int var_16 = 2332279767892786342ULL;
unsigned char var_18 = (unsigned char)11;
int zero = 0;
unsigned long long int var_19 = 3786042729479883092ULL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)48894;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)52422;
short var_24 = (short)-22124;
short var_25 = (short)11057;
unsigned long long int var_26 = 9520826235796430808ULL;
unsigned short var_27 = (unsigned short)46462;
unsigned char var_28 = (unsigned char)41;
unsigned short var_29 = (unsigned short)19044;
unsigned long long int var_30 = 2804461429529913409ULL;
unsigned char arr_0 [23] ;
unsigned char arr_1 [23] ;
unsigned short arr_2 [23] [23] ;
unsigned char arr_4 [23] ;
_Bool arr_5 [23] ;
unsigned int arr_6 [23] ;
short arr_12 [18] ;
unsigned char arr_13 [18] [18] ;
unsigned short arr_14 [18] ;
unsigned short arr_15 [18] ;
unsigned short arr_3 [23] [23] ;
unsigned char arr_7 [23] [23] ;
unsigned char arr_8 [23] ;
unsigned long long int arr_11 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)62712;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 2892680141U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (short)26310;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)12 : (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39318 : (unsigned short)51331;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (unsigned short)20794;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)43218;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 704918369996270138ULL : 5015694184711818953ULL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
