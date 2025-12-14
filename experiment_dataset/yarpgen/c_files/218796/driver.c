#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11915;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 650884482U;
signed char var_6 = (signed char)-84;
int var_7 = 1068272364;
unsigned char var_8 = (unsigned char)212;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)31;
_Bool var_11 = (_Bool)0;
int var_12 = -1520842004;
signed char var_14 = (signed char)-37;
int var_15 = 233285238;
unsigned long long int var_16 = 844489482246226724ULL;
unsigned long long int var_17 = 9067256868478064689ULL;
int var_18 = -1194679860;
unsigned long long int var_19 = 395419334428929699ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)42873;
long long int var_21 = -6729820935358540261LL;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)122;
unsigned short var_24 = (unsigned short)2683;
short var_25 = (short)13560;
short var_26 = (short)6627;
int var_27 = -221527992;
unsigned int var_28 = 2639484104U;
int var_29 = -484701254;
unsigned int var_30 = 2098659353U;
unsigned long long int var_31 = 8063576321152330309ULL;
long long int var_32 = -4089878017613306494LL;
short var_33 = (short)21758;
unsigned int var_34 = 1832775294U;
signed char var_35 = (signed char)(-127 - 1);
long long int var_36 = 5528268950090553352LL;
unsigned int var_37 = 3841261541U;
unsigned int var_38 = 2667771280U;
unsigned long long int var_39 = 11427999926293364263ULL;
signed char var_40 = (signed char)-8;
_Bool var_41 = (_Bool)0;
short var_42 = (short)26827;
_Bool var_43 = (_Bool)0;
unsigned char var_44 = (unsigned char)138;
_Bool var_45 = (_Bool)1;
unsigned short var_46 = (unsigned short)26146;
unsigned int var_47 = 3962692989U;
unsigned short var_48 = (unsigned short)48120;
unsigned long long int arr_0 [14] [14] ;
_Bool arr_1 [14] ;
_Bool arr_3 [15] ;
unsigned int arr_4 [15] ;
int arr_8 [15] ;
unsigned long long int arr_14 [15] [15] ;
long long int arr_15 [15] [15] [15] ;
int arr_30 [15] [15] [15] [15] [15] ;
int arr_36 [25] ;
unsigned int arr_37 [25] ;
unsigned int arr_24 [15] [15] ;
unsigned long long int arr_28 [15] [15] [15] [15] [15] [15] [15] ;
unsigned short arr_35 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 15879859430159583063ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 3939086791U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 938344492;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = 17033383818049536973ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 7431237225711740656LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 1290898674 : 499922553;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_36 [i_0] = 1818043554;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = 111803949U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_24 [i_0] [i_1] = 3741112598U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 6974452936252179239ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)58434;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
