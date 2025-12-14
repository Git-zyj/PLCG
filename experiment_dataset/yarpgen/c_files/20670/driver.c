#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
unsigned short var_1 = (unsigned short)65102;
short var_3 = (short)-15500;
long long int var_4 = -2186841943822320611LL;
unsigned char var_6 = (unsigned char)201;
int var_7 = -1241594527;
short var_8 = (short)-23222;
unsigned long long int var_9 = 2226936206038000329ULL;
signed char var_10 = (signed char)-86;
int zero = 0;
signed char var_11 = (signed char)4;
short var_12 = (short)-2426;
unsigned int var_13 = 2911996575U;
unsigned char var_14 = (unsigned char)120;
long long int var_15 = 3219285980256191888LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 5827757803642614844LL;
unsigned char var_18 = (unsigned char)41;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14132459004613363156ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 710921541U;
short var_23 = (short)-23576;
short var_24 = (short)16929;
short var_25 = (short)-21561;
signed char var_26 = (signed char)0;
unsigned short var_27 = (unsigned short)24638;
unsigned long long int var_28 = 3021198794388977446ULL;
unsigned char var_29 = (unsigned char)41;
unsigned long long int var_30 = 425224285988911889ULL;
signed char var_31 = (signed char)-37;
unsigned char var_32 = (unsigned char)59;
unsigned long long int var_33 = 18362093215868006671ULL;
int var_34 = -697734925;
unsigned int var_35 = 3379348406U;
int var_36 = 1156338557;
unsigned int var_37 = 2988231592U;
short var_38 = (short)-28874;
long long int arr_0 [15] [15] ;
_Bool arr_2 [15] ;
signed char arr_5 [22] ;
_Bool arr_7 [22] [22] [22] ;
unsigned long long int arr_8 [22] [22] [22] ;
_Bool arr_9 [22] ;
long long int arr_10 [22] [22] [22] ;
unsigned char arr_11 [22] [22] ;
unsigned char arr_13 [22] [22] [22] [22] ;
_Bool arr_15 [22] [22] [22] [22] ;
signed char arr_19 [22] [22] [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 6234168685334061382LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-39 : (signed char)69;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 17207698176032371257ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 7794568946798473503LL : -4987722050086231701LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)3;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_37);
    hash(&seed, var_38);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
