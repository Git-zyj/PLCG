#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16861065036337584935ULL;
int var_1 = -1052727867;
long long int var_3 = 5121388991302139656LL;
short var_4 = (short)31678;
int var_5 = -499020498;
signed char var_6 = (signed char)99;
int var_7 = -1184488892;
unsigned int var_8 = 2009327843U;
int var_9 = 770036799;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 4467255372135451460LL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)166;
int zero = 0;
int var_18 = 1883736779;
unsigned char var_19 = (unsigned char)58;
long long int var_20 = -4738815783311270419LL;
int var_21 = 1271166962;
long long int var_22 = 8832638579809714931LL;
unsigned int var_23 = 1281199716U;
int var_24 = 1895768917;
int var_25 = -844621990;
unsigned char var_26 = (unsigned char)2;
unsigned short var_27 = (unsigned short)32467;
long long int var_28 = -4109447720148161747LL;
unsigned long long int var_29 = 9842117067838676047ULL;
long long int var_30 = -7340351840005867680LL;
unsigned long long int var_31 = 10989031498359432045ULL;
int arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
long long int arr_2 [13] ;
signed char arr_3 [13] ;
unsigned char arr_8 [13] [13] [13] ;
signed char arr_9 [13] [13] ;
long long int arr_10 [13] ;
unsigned char arr_14 [13] ;
int arr_4 [13] [13] ;
signed char arr_11 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -1620551012;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2259330995472132425ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 5724659513654967883LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)92 : (signed char)-12;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 4174699250244640657LL : -8515527893793188330LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -707887760;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-88 : (signed char)37;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
