#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23080;
unsigned short var_2 = (unsigned short)15280;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)66;
unsigned char var_7 = (unsigned char)26;
signed char var_9 = (signed char)116;
unsigned short var_11 = (unsigned short)52942;
_Bool var_12 = (_Bool)1;
long long int var_13 = 9081812609920267507LL;
signed char var_14 = (signed char)-38;
unsigned int var_15 = 3724788247U;
unsigned long long int var_18 = 3586700899927399441ULL;
int zero = 0;
unsigned long long int var_19 = 16628261190200400302ULL;
unsigned long long int var_20 = 11366423667571018368ULL;
unsigned short var_21 = (unsigned short)46055;
unsigned long long int var_22 = 2627480472560883877ULL;
signed char var_23 = (signed char)78;
unsigned long long int var_24 = 17757199236884147561ULL;
unsigned char var_25 = (unsigned char)10;
unsigned short var_26 = (unsigned short)23232;
unsigned long long int var_27 = 16495437953342368039ULL;
unsigned long long int var_28 = 2959219314878836038ULL;
int var_29 = -1153974791;
unsigned int arr_0 [15] ;
int arr_1 [15] [15] ;
long long int arr_4 [13] [13] ;
long long int arr_5 [13] [13] ;
unsigned short arr_8 [13] [13] [13] ;
unsigned int arr_9 [13] [13] [13] ;
int arr_12 [13] [13] ;
unsigned char arr_16 [13] ;
unsigned char arr_2 [15] ;
int arr_3 [15] [15] ;
int arr_6 [13] [13] ;
int arr_7 [13] ;
int arr_13 [13] [13] ;
unsigned long long int arr_14 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1937117672U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 1607562478;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 239022564229403046LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 155316387649890907LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)42494;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2542186186U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = 1753538932;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 136362922;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = -408080818;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 102818781;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? -1791340096 : -1716747616;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 2323260388090738694ULL : 13016951364775386152ULL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
