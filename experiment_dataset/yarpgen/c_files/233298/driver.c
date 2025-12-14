#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 5885377;
unsigned int var_1 = 2455158510U;
unsigned short var_2 = (unsigned short)28326;
signed char var_3 = (signed char)-115;
unsigned char var_4 = (unsigned char)234;
signed char var_5 = (signed char)107;
unsigned long long int var_6 = 2845764747976381628ULL;
unsigned int var_7 = 1456891521U;
unsigned long long int var_8 = 747759866753249614ULL;
unsigned short var_9 = (unsigned short)46915;
unsigned short var_10 = (unsigned short)13528;
unsigned char var_11 = (unsigned char)6;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)113;
signed char var_14 = (signed char)-46;
int zero = 0;
signed char var_15 = (signed char)10;
unsigned long long int var_16 = 1963457761742383233ULL;
unsigned long long int var_17 = 14440686182556595886ULL;
unsigned long long int var_18 = 3094324650017579536ULL;
int var_19 = -2035043386;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)101;
unsigned long long int var_23 = 2500590375035894518ULL;
unsigned char var_24 = (unsigned char)132;
_Bool var_25 = (_Bool)1;
int var_26 = -324839509;
unsigned long long int var_27 = 13422728328599242410ULL;
int var_28 = 555175603;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)0;
unsigned long long int var_31 = 10850328883699289197ULL;
short var_32 = (short)-10790;
int var_33 = -560815188;
short var_34 = (short)-8368;
_Bool var_35 = (_Bool)1;
int var_36 = -375742329;
int var_37 = -2040912592;
unsigned short var_38 = (unsigned short)46067;
_Bool var_39 = (_Bool)1;
long long int var_40 = 1849542059963941334LL;
unsigned char var_41 = (unsigned char)97;
signed char var_42 = (signed char)-90;
unsigned int var_43 = 700621580U;
int var_44 = 1122539796;
_Bool var_45 = (_Bool)0;
short var_46 = (short)14396;
int var_47 = -1504984203;
long long int var_48 = 3052166209475292230LL;
signed char var_49 = (signed char)13;
unsigned short arr_0 [25] ;
unsigned int arr_1 [25] ;
short arr_2 [25] ;
signed char arr_4 [18] ;
short arr_5 [18] ;
short arr_6 [16] ;
unsigned long long int arr_7 [16] [16] ;
short arr_11 [20] ;
unsigned long long int arr_12 [20] ;
unsigned int arr_13 [14] [14] ;
int arr_14 [14] ;
unsigned long long int arr_15 [14] [14] ;
unsigned short arr_16 [14] ;
unsigned int arr_17 [14] ;
unsigned char arr_22 [14] ;
unsigned int arr_23 [14] [14] ;
int arr_27 [14] [14] [14] [14] ;
short arr_29 [14] [14] [14] ;
signed char arr_35 [14] ;
long long int arr_40 [14] [14] [14] [14] ;
unsigned long long int arr_3 [25] ;
int arr_9 [16] [16] ;
unsigned short arr_10 [16] ;
signed char arr_31 [14] [14] [14] ;
unsigned short arr_43 [14] ;
short arr_44 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)38745;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 681240151U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-6730;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)24549;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (short)-23477;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 3996134315696854840ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (short)-2018;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 16429057638723550163ULL : 12797337569301689672ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = 3577102314U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 1066482110;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 11959302709142621133ULL : 18138708990252161193ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (unsigned short)52884;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 966766537U : 3888428740U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_23 [i_0] [i_1] = 4062085315U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1242810095 : 773548379;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (short)16519;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = -2801099682571710273LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 14013788207119511913ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = 122669496;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned short)29583;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)85 : (signed char)59;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23098 : (unsigned short)3787;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_44 [i_0] [i_1] = (short)27428;
}

void checksum() {
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
