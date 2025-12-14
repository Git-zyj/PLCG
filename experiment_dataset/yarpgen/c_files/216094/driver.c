#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3297432347U;
_Bool var_2 = (_Bool)1;
unsigned int var_7 = 2105068177U;
unsigned char var_11 = (unsigned char)107;
unsigned char var_12 = (unsigned char)120;
signed char var_13 = (signed char)43;
unsigned int var_16 = 2099783711U;
unsigned char var_18 = (unsigned char)73;
int zero = 0;
int var_20 = -238598511;
unsigned int var_21 = 3428324734U;
unsigned long long int var_22 = 3713770892093482914ULL;
_Bool var_23 = (_Bool)1;
int var_24 = 1501182388;
unsigned int var_25 = 3444063758U;
signed char var_26 = (signed char)-111;
signed char var_27 = (signed char)-78;
unsigned long long int var_28 = 2580941009703734234ULL;
unsigned char var_29 = (unsigned char)211;
unsigned int var_30 = 2446054224U;
unsigned int var_31 = 3117518977U;
unsigned long long int var_32 = 2632898857312779560ULL;
unsigned long long int var_33 = 4509476736081175875ULL;
int var_34 = -1098439035;
unsigned int var_35 = 2204210481U;
unsigned int var_36 = 1012721039U;
unsigned int var_37 = 2560394272U;
_Bool arr_0 [25] ;
int arr_1 [25] [25] ;
unsigned long long int arr_3 [25] ;
unsigned int arr_4 [25] ;
int arr_5 [25] [25] ;
unsigned long long int arr_6 [25] [25] ;
signed char arr_7 [25] [25] [25] ;
int arr_9 [25] ;
int arr_10 [25] [25] ;
unsigned int arr_12 [14] ;
int arr_14 [14] ;
_Bool arr_20 [14] ;
unsigned int arr_22 [14] [14] [14] ;
unsigned int arr_23 [14] [14] [14] ;
unsigned char arr_11 [25] [25] ;
int arr_16 [14] ;
signed char arr_27 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 166000926;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1883934910228017960ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 3113187921U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 1548183737;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 10818232475116662959ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = -1018750588;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = 14476631;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 1061416637U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = -2021853000;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 2361214566U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 3742949667U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -117819545 : 288179123;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)8 : (signed char)66;
}

void checksum() {
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
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
