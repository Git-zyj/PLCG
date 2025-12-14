#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 874000922592314938ULL;
unsigned char var_5 = (unsigned char)163;
unsigned short var_6 = (unsigned short)53667;
int var_7 = -858384999;
unsigned char var_8 = (unsigned char)92;
unsigned long long int var_9 = 16091156697792826760ULL;
unsigned long long int var_12 = 1383754368856054747ULL;
long long int var_13 = 4470716902936506763LL;
signed char var_14 = (signed char)42;
long long int var_15 = -7062641116470158762LL;
signed char var_16 = (signed char)127;
unsigned long long int var_17 = 4019570988388987400ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 795092419024389769ULL;
int var_20 = -35339484;
unsigned int var_21 = 397086275U;
unsigned char var_22 = (unsigned char)158;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-9794;
unsigned char var_25 = (unsigned char)169;
unsigned short var_26 = (unsigned short)34631;
unsigned char var_27 = (unsigned char)244;
short var_28 = (short)-16036;
unsigned long long int var_29 = 1189552642720341111ULL;
unsigned long long int var_30 = 12676958863098920707ULL;
long long int var_31 = 2493445248030818872LL;
unsigned short var_32 = (unsigned short)47547;
_Bool var_33 = (_Bool)0;
int var_34 = 1545952275;
int var_35 = 1989243462;
unsigned char var_36 = (unsigned char)230;
long long int var_37 = -2009917085664438038LL;
unsigned long long int var_38 = 16601519707291986824ULL;
_Bool arr_1 [13] ;
long long int arr_2 [13] [13] ;
int arr_5 [20] ;
unsigned char arr_6 [20] [20] ;
short arr_7 [20] [20] [20] ;
unsigned char arr_8 [20] ;
unsigned char arr_9 [20] [20] ;
signed char arr_13 [20] [20] ;
unsigned char arr_19 [20] [20] [20] [20] [20] ;
long long int arr_23 [20] [20] [20] ;
long long int arr_33 [19] ;
long long int arr_35 [19] [19] [19] ;
unsigned short arr_45 [23] ;
_Bool arr_46 [23] ;
short arr_3 [13] [13] ;
signed char arr_4 [13] ;
long long int arr_11 [20] ;
unsigned char arr_27 [20] ;
unsigned long long int arr_31 [20] [20] [20] ;
_Bool arr_32 [20] ;
unsigned short arr_37 [19] ;
unsigned short arr_38 [19] ;
signed char arr_43 [19] [19] [19] ;
unsigned short arr_44 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = -1842609818325194265LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -818246718;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-32131;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -7543612630614150894LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_33 [i_0] = 2843085361341302272LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = -591983772222685889LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_45 [i_0] = (unsigned short)53073;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_46 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (short)3222;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 800214727680277021LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13257546399216921441ULL : 10988477046192115896ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_37 [i_0] = (unsigned short)15479;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_38 [i_0] = (unsigned short)63052;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_44 [i_0] [i_1] = (unsigned short)14975;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_43 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
