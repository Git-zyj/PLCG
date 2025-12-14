#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37508;
long long int var_2 = 5918649742186727805LL;
long long int var_3 = 2648381868279094107LL;
signed char var_4 = (signed char)40;
unsigned int var_5 = 3049075332U;
unsigned short var_6 = (unsigned short)46705;
short var_7 = (short)22139;
unsigned long long int var_10 = 13981564801735167184ULL;
unsigned long long int var_11 = 17895734528493240965ULL;
unsigned char var_12 = (unsigned char)164;
unsigned long long int var_14 = 15331046716844249977ULL;
short var_15 = (short)-11198;
long long int var_16 = 573919805322641031LL;
int zero = 0;
unsigned long long int var_17 = 11598200779126458212ULL;
unsigned short var_18 = (unsigned short)46279;
unsigned short var_19 = (unsigned short)40667;
unsigned short var_20 = (unsigned short)59327;
signed char var_21 = (signed char)-85;
_Bool var_22 = (_Bool)1;
short var_23 = (short)32429;
unsigned short var_24 = (unsigned short)16151;
unsigned char var_25 = (unsigned char)141;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)41758;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)1;
int var_31 = -1898195565;
short var_32 = (short)15799;
_Bool var_33 = (_Bool)0;
unsigned int var_34 = 3141121509U;
int arr_0 [17] ;
short arr_1 [17] ;
signed char arr_4 [14] [14] ;
short arr_5 [14] ;
signed char arr_7 [15] ;
signed char arr_8 [15] ;
_Bool arr_12 [14] ;
long long int arr_16 [23] ;
signed char arr_17 [23] ;
int arr_18 [23] ;
signed char arr_23 [23] [23] [23] ;
long long int arr_24 [23] [23] [23] ;
short arr_2 [17] ;
long long int arr_3 [17] ;
_Bool arr_6 [14] ;
unsigned long long int arr_10 [15] ;
unsigned short arr_11 [15] [15] ;
long long int arr_19 [23] ;
signed char arr_22 [23] [23] [23] ;
signed char arr_30 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 773981107;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)4860;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)25703;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)45 : (signed char)-17;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = -4977130017696486230LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)78 : (signed char)-100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -2044710790 : 1708146051;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -440031225397069084LL : 8562698328823540359LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)6823;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 7450996374902141635LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 6152496342918605783ULL : 12070832178526588965ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)542 : (unsigned short)28165;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 2123310262259920955LL : -4453234010350188575LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-101 : (signed char)-7;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (signed char)81 : (signed char)-81;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
