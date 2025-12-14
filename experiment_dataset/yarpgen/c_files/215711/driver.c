#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
short var_1 = (short)-892;
unsigned char var_2 = (unsigned char)27;
int var_3 = -1971834565;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)64;
short var_6 = (short)-20229;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1876135655U;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-14;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)118;
short var_14 = (short)12669;
signed char var_15 = (signed char)37;
unsigned short var_16 = (unsigned short)35561;
signed char var_17 = (signed char)-112;
long long int var_18 = 1030037762503190142LL;
short var_19 = (short)15968;
unsigned char var_20 = (unsigned char)55;
unsigned short var_21 = (unsigned short)28251;
short var_22 = (short)-21919;
unsigned short var_23 = (unsigned short)19546;
unsigned short var_24 = (unsigned short)33977;
unsigned char var_25 = (unsigned char)142;
long long int var_26 = -1379145179945016863LL;
unsigned long long int var_27 = 2769102701042327134ULL;
unsigned int var_28 = 1026163992U;
short arr_0 [15] [15] ;
short arr_1 [15] ;
signed char arr_2 [15] ;
_Bool arr_5 [19] ;
signed char arr_8 [19] [19] ;
long long int arr_11 [19] [19] [19] [19] ;
long long int arr_15 [19] [19] ;
unsigned char arr_21 [19] [19] [19] [19] ;
int arr_22 [23] ;
int arr_27 [23] [23] ;
int arr_28 [23] [23] ;
_Bool arr_29 [23] [23] [23] ;
long long int arr_31 [23] ;
_Bool arr_33 [15] ;
short arr_3 [15] ;
int arr_12 [19] ;
unsigned short arr_24 [23] ;
short arr_35 [15] ;
unsigned char arr_36 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-2741;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-25874;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -2289798489460461126LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = -1471478151278589411LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = -923600268;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = -598562771;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = 799355448;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = 4280818317433865382LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_33 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-1059;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 42677113 : 1082089980;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = (unsigned short)53175;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_35 [i_0] = (short)-17849;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_36 [i_0] = (unsigned char)69;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
