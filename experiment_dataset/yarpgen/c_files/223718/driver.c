#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)171;
short var_2 = (short)29232;
unsigned long long int var_4 = 18424553721246629978ULL;
unsigned char var_6 = (unsigned char)106;
unsigned char var_8 = (unsigned char)156;
unsigned long long int var_11 = 2876261457223184702ULL;
int zero = 0;
short var_12 = (short)-14444;
unsigned long long int var_13 = 17244267971115655759ULL;
unsigned long long int var_14 = 11261362490939590833ULL;
short var_15 = (short)-9469;
unsigned char var_16 = (unsigned char)217;
unsigned short var_17 = (unsigned short)829;
unsigned long long int var_18 = 8145030532313291961ULL;
unsigned char var_19 = (unsigned char)132;
unsigned long long int var_20 = 5304700653576523322ULL;
unsigned short var_21 = (unsigned short)35823;
unsigned char var_22 = (unsigned char)141;
unsigned char var_23 = (unsigned char)229;
unsigned char var_24 = (unsigned char)29;
unsigned long long int var_25 = 9522421709625905088ULL;
unsigned long long int var_26 = 14717597748721298771ULL;
unsigned long long int var_27 = 14195659062082659778ULL;
unsigned long long int var_28 = 700865328243821438ULL;
short var_29 = (short)24929;
short var_30 = (short)-9926;
short var_31 = (short)-17357;
unsigned char var_32 = (unsigned char)100;
unsigned char var_33 = (unsigned char)152;
unsigned long long int arr_0 [11] ;
short arr_1 [11] ;
unsigned long long int arr_3 [11] [11] [11] ;
unsigned short arr_6 [11] [11] [11] [11] ;
unsigned long long int arr_10 [11] [11] [11] [11] ;
_Bool arr_14 [22] [22] ;
short arr_15 [22] ;
unsigned char arr_16 [22] ;
int arr_17 [12] [12] ;
unsigned int arr_18 [12] ;
unsigned long long int arr_19 [12] ;
_Bool arr_24 [19] ;
unsigned long long int arr_27 [19] [19] ;
unsigned int arr_28 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 782150928668613771ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)29142;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 13403829378586824917ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)35403;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 7086681162925439606ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (short)9729;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = -1278132872;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = 1187959739U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 6361640855262230582ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_27 [i_0] [i_1] = 8923335177182732908ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = 2715954017U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
