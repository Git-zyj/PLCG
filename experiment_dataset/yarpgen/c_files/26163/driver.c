#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2820417189U;
unsigned char var_3 = (unsigned char)188;
unsigned int var_4 = 1433149488U;
unsigned long long int var_5 = 1108671090157108769ULL;
unsigned long long int var_6 = 15461195945687003983ULL;
unsigned long long int var_7 = 6004502067444683697ULL;
unsigned long long int var_8 = 9341790246656657973ULL;
unsigned int var_9 = 821995309U;
unsigned long long int var_10 = 4676016413508987064ULL;
unsigned int var_11 = 3007141907U;
unsigned int var_12 = 2288665519U;
int var_13 = 23934304;
int zero = 0;
unsigned char var_14 = (unsigned char)5;
unsigned int var_15 = 2186228946U;
unsigned long long int var_16 = 5904818695562948043ULL;
unsigned short var_17 = (unsigned short)27151;
unsigned short var_18 = (unsigned short)48674;
unsigned long long int var_19 = 14116976371387129868ULL;
unsigned int var_20 = 2449413544U;
int var_21 = 36329392;
int var_22 = 1481568576;
unsigned long long int var_23 = 2100328854092546638ULL;
unsigned char var_24 = (unsigned char)221;
unsigned int var_25 = 3105832998U;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)33034;
unsigned long long int var_28 = 11829751062496597735ULL;
unsigned int arr_1 [21] [21] ;
unsigned int arr_2 [21] ;
unsigned char arr_3 [21] ;
unsigned int arr_4 [21] ;
unsigned int arr_5 [21] [21] [21] ;
_Bool arr_7 [21] [21] ;
unsigned long long int arr_9 [21] [21] [21] ;
unsigned long long int arr_11 [21] [21] ;
unsigned long long int arr_13 [21] [21] [21] ;
unsigned int arr_14 [21] ;
unsigned long long int arr_16 [21] [21] ;
int arr_18 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_21 [21] ;
unsigned long long int arr_22 [21] [21] [21] [21] ;
unsigned short arr_23 [21] [21] [21] ;
unsigned char arr_24 [21] [21] [21] ;
unsigned short arr_27 [21] ;
unsigned int arr_28 [21] [21] [21] ;
_Bool arr_31 [16] ;
unsigned char arr_8 [21] ;
unsigned long long int arr_26 [21] [21] [21] [21] [21] ;
_Bool arr_29 [21] ;
unsigned char arr_30 [21] ;
unsigned long long int arr_33 [16] ;
unsigned long long int arr_34 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 741545966U : 2399346928U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 4122849111U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1468126095U : 2213165214U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2222990249U : 1087408001U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6884334992410636691ULL : 9142191208347832402ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 16871702803695667132ULL : 15295876644097693382ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 12329918348637903428ULL : 17169374107796865042ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 2107189591U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 12502989593721600801ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1784176998 : -1495786646;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = 395842417U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 15238188187312785757ULL : 7846975654533322539ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned short)16541;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)168 : (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6814 : (unsigned short)31688;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4225878751U : 3404776130U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_31 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)227 : (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 14963452384457463526ULL : 393289577589305189ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (unsigned char)6 : (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_33 [i_0] = 15127227766066477740ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_34 [i_0] = 15465073593315212161ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
