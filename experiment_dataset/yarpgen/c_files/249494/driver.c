#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
unsigned long long int var_1 = 13937395146714427645ULL;
unsigned long long int var_2 = 3154149591404120539ULL;
short var_4 = (short)-28598;
unsigned long long int var_5 = 1772046662729642844ULL;
int var_6 = 1679184433;
unsigned long long int var_7 = 3211445363891300888ULL;
short var_8 = (short)-21883;
long long int var_9 = -8429667852391443066LL;
short var_11 = (short)8641;
signed char var_12 = (signed char)33;
int var_13 = -1162979135;
signed char var_14 = (signed char)16;
int var_15 = -1418493790;
unsigned char var_16 = (unsigned char)196;
int zero = 0;
unsigned int var_17 = 3773216124U;
int var_18 = -417010118;
long long int var_19 = 1976847157425204013LL;
short var_20 = (short)-745;
short var_21 = (short)-10111;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)38;
signed char var_24 = (signed char)50;
int var_25 = -384753018;
long long int var_26 = -300863155509496347LL;
signed char var_27 = (signed char)-54;
int var_28 = 189623753;
unsigned short var_29 = (unsigned short)9071;
_Bool var_30 = (_Bool)1;
unsigned short var_31 = (unsigned short)558;
int var_32 = -488428979;
unsigned int var_33 = 888390036U;
unsigned long long int var_34 = 9337129681944695475ULL;
signed char var_35 = (signed char)24;
signed char var_36 = (signed char)-45;
_Bool var_37 = (_Bool)0;
unsigned char var_38 = (unsigned char)162;
int var_39 = 502613455;
int var_40 = -232889298;
unsigned int arr_1 [23] [23] ;
unsigned long long int arr_2 [23] ;
signed char arr_3 [23] [23] [23] ;
unsigned char arr_5 [23] ;
unsigned long long int arr_7 [23] [23] ;
long long int arr_10 [23] [23] [23] ;
unsigned char arr_15 [11] ;
unsigned int arr_21 [10] [10] [10] ;
short arr_33 [10] [10] [10] [10] [10] [10] [10] ;
int arr_35 [10] ;
signed char arr_18 [11] ;
unsigned int arr_24 [10] ;
signed char arr_36 [10] ;
unsigned char arr_45 [10] [10] [10] ;
signed char arr_49 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 803096567U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 8968385297557837561ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)114 : (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 15412233302966460828ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -3566555307429821896LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 26469700U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-21386;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_35 [i_0] = 2104833339;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = 3563777333U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (signed char)-82 : (signed char)-75;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)204 : (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_49 [i_0] = (signed char)9;
}

void checksum() {
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_45 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_49 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
