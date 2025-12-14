#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13749;
long long int var_1 = -9181457525362903303LL;
long long int var_2 = -4455151677824838230LL;
int var_3 = -200978075;
unsigned short var_4 = (unsigned short)37392;
unsigned long long int var_5 = 16110678674139994891ULL;
unsigned char var_6 = (unsigned char)223;
unsigned int var_8 = 23600455U;
unsigned int var_9 = 3583113034U;
_Bool var_10 = (_Bool)0;
long long int var_11 = -8855718417704931997LL;
unsigned long long int var_12 = 14999318710472498112ULL;
short var_13 = (short)32534;
long long int var_15 = -2435249459996135467LL;
unsigned long long int var_16 = 3264112463271752497ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)14;
int var_18 = 2014684852;
unsigned char var_19 = (unsigned char)200;
short var_20 = (short)-25210;
int var_21 = 1139373778;
int var_22 = -1623423480;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)38204;
unsigned char var_25 = (unsigned char)65;
unsigned int var_26 = 2300153056U;
unsigned short var_27 = (unsigned short)37922;
short var_28 = (short)-7175;
_Bool arr_5 [18] [18] [18] ;
unsigned long long int arr_24 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 10465475061177190254ULL : 8839283972447585820ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
