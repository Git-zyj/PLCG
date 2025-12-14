#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)7238;
_Bool var_3 = (_Bool)0;
short var_4 = (short)29569;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3901427928U;
short var_7 = (short)30162;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-19334;
short var_11 = (short)-28856;
int var_12 = -423957269;
int var_13 = -965690465;
_Bool var_14 = (_Bool)1;
long long int var_15 = -115721588769459498LL;
short var_17 = (short)-24739;
long long int var_18 = -2810392964080159091LL;
signed char var_19 = (signed char)-1;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)55177;
signed char var_22 = (signed char)-117;
unsigned char var_23 = (unsigned char)14;
short var_24 = (short)23704;
short var_25 = (short)6859;
unsigned int var_26 = 1713167528U;
unsigned char arr_0 [13] [13] ;
signed char arr_1 [13] ;
int arr_3 [13] ;
int arr_4 [13] ;
signed char arr_5 [13] [13] ;
unsigned char arr_10 [10] ;
unsigned long long int arr_2 [13] [13] ;
short arr_6 [13] [13] ;
_Bool arr_7 [13] ;
short arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1807633834;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 654891976;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 17299350906332609387ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-28164;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (short)8021;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
