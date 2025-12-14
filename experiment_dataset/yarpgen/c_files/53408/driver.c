#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)48;
int var_2 = 381906232;
_Bool var_3 = (_Bool)1;
int var_4 = 63884023;
unsigned short var_5 = (unsigned short)42343;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2119334990U;
unsigned int var_8 = 1798323751U;
unsigned int var_9 = 3826534894U;
int var_10 = -218778787;
unsigned short var_11 = (unsigned short)37871;
unsigned char var_12 = (unsigned char)124;
int zero = 0;
unsigned short var_13 = (unsigned short)2608;
unsigned short var_14 = (unsigned short)64001;
unsigned int var_15 = 964329369U;
short var_16 = (short)-18953;
int var_17 = 1588645194;
signed char var_18 = (signed char)-62;
_Bool var_19 = (_Bool)1;
int var_20 = 1367137326;
unsigned short var_21 = (unsigned short)11252;
int var_22 = 1784739638;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)191;
unsigned int var_25 = 4098944892U;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)225;
int var_28 = -89694354;
_Bool var_29 = (_Bool)1;
int var_30 = 1060775389;
long long int arr_0 [18] [18] ;
int arr_1 [18] ;
short arr_2 [18] ;
short arr_3 [18] [18] [18] ;
_Bool arr_5 [13] ;
int arr_6 [13] [13] [13] ;
short arr_7 [13] [13] ;
unsigned char arr_10 [13] [13] ;
unsigned short arr_13 [18] [18] ;
int arr_14 [18] ;
long long int arr_20 [23] [23] ;
unsigned int arr_8 [13] [13] ;
unsigned char arr_16 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 1682855106000815868LL : 3686042329709253396LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -1602564562;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-24461;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)6742 : (short)23911;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 871566589;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (short)1732;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)42 : (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)24470;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = -342428205;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = 4613139485135718370LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = 1663577901U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (unsigned char)151;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
