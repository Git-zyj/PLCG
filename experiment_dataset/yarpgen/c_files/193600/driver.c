#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-32564;
unsigned char var_4 = (unsigned char)97;
int var_5 = 1547197847;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)47;
long long int var_8 = -8628942567362353364LL;
int var_11 = 639928668;
int zero = 0;
short var_13 = (short)-21731;
short var_14 = (short)19686;
int var_15 = -1390752472;
signed char var_16 = (signed char)56;
unsigned char var_17 = (unsigned char)198;
unsigned int var_18 = 3854939750U;
unsigned short var_19 = (unsigned short)65487;
long long int var_20 = -6212985139111638462LL;
int var_21 = -491030874;
unsigned long long int var_22 = 1268428741812179168ULL;
unsigned long long int var_23 = 5029133786900058980ULL;
_Bool arr_0 [15] [15] ;
unsigned long long int arr_3 [15] [15] ;
_Bool arr_5 [15] [15] [15] ;
unsigned char arr_6 [17] ;
short arr_7 [17] [17] ;
unsigned short arr_8 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 11202641465303320074ULL : 1714107547233932871ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)33 : (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (short)21260;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)16964 : (unsigned short)47246;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
