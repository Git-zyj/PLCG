#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6801;
int var_3 = -269686169;
int var_5 = 102176481;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)141;
short var_8 = (short)4370;
short var_9 = (short)20837;
signed char var_10 = (signed char)-92;
unsigned char var_12 = (unsigned char)27;
long long int var_13 = -6788773719732093652LL;
short var_15 = (short)12359;
unsigned long long int var_16 = 8676265524583592950ULL;
long long int var_18 = -7563018459449515448LL;
int zero = 0;
int var_19 = 1839202834;
short var_20 = (short)-3556;
unsigned short var_21 = (unsigned short)42304;
signed char var_22 = (signed char)-12;
unsigned long long int var_23 = 6259115808526018453ULL;
signed char var_24 = (signed char)-97;
unsigned char var_25 = (unsigned char)163;
unsigned long long int var_26 = 3282360804070258349ULL;
signed char var_27 = (signed char)14;
_Bool var_28 = (_Bool)0;
unsigned int var_29 = 1394259115U;
long long int var_30 = 3591565808752900027LL;
_Bool var_31 = (_Bool)1;
unsigned short var_32 = (unsigned short)1942;
long long int var_33 = -2082601018311224820LL;
unsigned short arr_0 [11] ;
signed char arr_1 [11] [11] ;
signed char arr_2 [11] ;
unsigned char arr_3 [11] [11] ;
short arr_5 [11] [11] ;
int arr_7 [11] ;
unsigned long long int arr_8 [11] ;
int arr_9 [11] [11] ;
signed char arr_13 [14] [14] ;
int arr_15 [14] ;
long long int arr_16 [14] [14] [14] ;
signed char arr_6 [11] ;
unsigned long long int arr_10 [11] [11] ;
unsigned long long int arr_11 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)36181;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-3888;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 623525356;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 9203121312826465619ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = -848069237;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = -544970844;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = -2604664059688207042LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = 16640479674281943489ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = 7434485029030404461ULL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
