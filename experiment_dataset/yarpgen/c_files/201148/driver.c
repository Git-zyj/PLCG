#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3470289970U;
unsigned int var_4 = 491272939U;
long long int var_5 = 2506694041806720273LL;
unsigned long long int var_6 = 8538063866002856716ULL;
unsigned int var_7 = 3362754378U;
signed char var_9 = (signed char)-69;
long long int var_13 = -5342802598895511141LL;
unsigned char var_16 = (unsigned char)213;
signed char var_17 = (signed char)-115;
int zero = 0;
unsigned short var_20 = (unsigned short)13866;
unsigned int var_21 = 4133397972U;
unsigned int var_22 = 1028586072U;
unsigned char var_23 = (unsigned char)203;
unsigned short var_24 = (unsigned short)1287;
short var_25 = (short)-32750;
unsigned long long int var_26 = 17714200205515073704ULL;
unsigned long long int var_27 = 14495249841205582076ULL;
unsigned short var_28 = (unsigned short)33455;
unsigned long long int var_29 = 11392173744050041668ULL;
unsigned short var_30 = (unsigned short)33186;
int var_31 = -374727482;
unsigned short arr_0 [25] ;
unsigned int arr_3 [25] [25] ;
unsigned char arr_5 [25] [25] [25] ;
short arr_7 [25] [25] [25] ;
signed char arr_9 [25] ;
unsigned short arr_11 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29939 : (unsigned short)54173;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 3999098902U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)22 : (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)13817;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)9228 : (unsigned short)28171;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
