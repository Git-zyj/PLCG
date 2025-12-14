#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_4 = 1824389298;
unsigned int var_5 = 1893516213U;
unsigned long long int var_6 = 5376455964336682351ULL;
unsigned int var_7 = 4123784995U;
short var_8 = (short)19518;
unsigned short var_9 = (unsigned short)60870;
short var_10 = (short)4012;
unsigned int var_12 = 87638742U;
int zero = 0;
int var_13 = 1038727172;
int var_14 = -371048996;
unsigned short var_15 = (unsigned short)52958;
unsigned short var_16 = (unsigned short)24964;
short var_17 = (short)-31019;
unsigned long long int var_18 = 10734499255821443731ULL;
int var_19 = 1123270995;
unsigned long long int var_20 = 17525939799113484448ULL;
unsigned long long int var_21 = 12177268293084861358ULL;
unsigned char var_22 = (unsigned char)147;
unsigned int var_23 = 3368244311U;
short var_24 = (short)5317;
signed char var_25 = (signed char)-36;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)42394;
unsigned long long int var_28 = 8585015642097801998ULL;
signed char var_29 = (signed char)127;
short var_30 = (short)9420;
unsigned char var_31 = (unsigned char)91;
_Bool var_32 = (_Bool)0;
int var_33 = 1442304425;
unsigned short var_34 = (unsigned short)1299;
unsigned long long int var_35 = 5552719669778205965ULL;
unsigned int var_36 = 3949921657U;
unsigned int arr_0 [24] ;
unsigned short arr_1 [24] ;
long long int arr_3 [16] [16] ;
unsigned short arr_4 [16] ;
short arr_6 [16] ;
unsigned char arr_7 [16] [16] ;
_Bool arr_8 [14] ;
unsigned int arr_9 [14] ;
unsigned int arr_12 [15] [15] [15] ;
unsigned char arr_13 [15] [15] [15] ;
short arr_14 [15] [15] [15] ;
_Bool arr_15 [15] ;
unsigned int arr_16 [15] [15] [15] ;
int arr_18 [10] [10] ;
unsigned int arr_21 [23] ;
_Bool arr_22 [23] ;
signed char arr_23 [23] ;
unsigned long long int arr_27 [13] [13] [13] ;
signed char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3925610119U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)40973;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -2701875441687723453LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)45426;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (short)31230;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1020943774U : 682259146U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1464034318U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)3023;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 3564419093U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 1266005861 : -1531502886;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = 702554184U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 13511766474357907134ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)40 : (signed char)83;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
