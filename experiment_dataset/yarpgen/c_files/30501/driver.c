#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
int var_1 = -40815714;
unsigned int var_3 = 606060208U;
unsigned char var_4 = (unsigned char)15;
int var_7 = -1271369393;
int var_9 = -41071601;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3035820867U;
unsigned char var_12 = (unsigned char)35;
int var_13 = -876410927;
unsigned char var_14 = (unsigned char)176;
unsigned short var_15 = (unsigned short)22121;
unsigned int var_16 = 3555872947U;
unsigned char var_17 = (unsigned char)68;
unsigned short var_18 = (unsigned short)27317;
int zero = 0;
unsigned short var_19 = (unsigned short)18747;
int var_20 = -808327621;
int var_21 = 1101322608;
short var_22 = (short)-3345;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)225;
unsigned int var_25 = 520088370U;
unsigned char var_26 = (unsigned char)151;
short var_27 = (short)-8832;
unsigned short var_28 = (unsigned short)61564;
unsigned short var_29 = (unsigned short)4033;
signed char var_30 = (signed char)-78;
_Bool var_31 = (_Bool)0;
short var_32 = (short)-21966;
int var_33 = -1767186404;
unsigned int var_34 = 1677213379U;
int var_35 = 1902285476;
unsigned char var_36 = (unsigned char)0;
unsigned int var_37 = 1437523357U;
unsigned char var_38 = (unsigned char)27;
unsigned short var_39 = (unsigned short)25021;
unsigned short arr_0 [16] [16] ;
signed char arr_1 [16] ;
unsigned short arr_2 [16] ;
unsigned int arr_5 [16] ;
unsigned short arr_6 [16] [16] [16] ;
short arr_7 [16] ;
unsigned char arr_9 [16] ;
_Bool arr_10 [16] [16] ;
short arr_11 [16] [16] [16] ;
int arr_13 [16] ;
signed char arr_14 [16] [16] ;
int arr_16 [12] ;
short arr_17 [12] ;
signed char arr_18 [12] [12] ;
unsigned char arr_19 [12] ;
int arr_25 [12] ;
int arr_26 [12] [12] ;
unsigned short arr_29 [12] [12] [12] ;
int arr_31 [12] [12] [12] ;
unsigned short arr_32 [12] ;
unsigned int arr_36 [12] [12] [12] [12] ;
int arr_37 [12] [12] [12] [12] ;
short arr_38 [12] [12] [12] [12] ;
unsigned short arr_40 [12] [12] ;
unsigned int arr_3 [16] [16] ;
int arr_8 [16] [16] ;
short arr_12 [16] [16] ;
short arr_15 [16] [16] [16] ;
unsigned char arr_20 [12] ;
int arr_21 [12] ;
_Bool arr_34 [12] [12] ;
unsigned long long int arr_41 [12] [12] [12] [12] ;
unsigned int arr_42 [12] ;
short arr_43 [12] [12] [12] ;
_Bool arr_44 [12] [12] ;
int arr_47 [12] ;
int arr_52 [12] [12] ;
unsigned int arr_53 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)11183;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)50856;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 2830067099U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)11475;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (short)-17438;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)18611;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = -1768828114;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = 1129231761;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (short)29208;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = 1553312;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_26 [i_0] [i_1] = 1994576990;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned short)6337;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 1982156652;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_32 [i_0] = (unsigned short)47215;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = 1397747006U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = -861902983;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (short)-16300;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned short)3961;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 2576260179U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 176153605;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-23372;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)-963;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = 1935803687;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_34 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = 18186536795341607693ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_42 [i_0] = 3748239378U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (short)11591;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_44 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_47 [i_0] = -1192930803;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_52 [i_0] [i_1] = 1677349353;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = 349626722U;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_43 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_53 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
