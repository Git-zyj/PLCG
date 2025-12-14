#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3851554692U;
unsigned long long int var_1 = 4160552861122544518ULL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-9085;
unsigned long long int var_7 = 18217130175999745649ULL;
short var_8 = (short)26562;
long long int var_10 = -1985438736187324954LL;
long long int var_11 = -3263760060609364513LL;
unsigned int var_12 = 2189654500U;
short var_13 = (short)-11387;
int zero = 0;
int var_14 = -2073638563;
unsigned long long int var_15 = 2961119495466674865ULL;
long long int var_16 = -2003669999923194857LL;
int var_17 = -634925355;
short var_18 = (short)-8252;
short var_19 = (short)-2431;
signed char var_20 = (signed char)-117;
unsigned int var_21 = 250256168U;
unsigned char var_22 = (unsigned char)220;
long long int var_23 = 8317003171759029792LL;
unsigned int var_24 = 3994168149U;
unsigned char var_25 = (unsigned char)157;
unsigned long long int var_26 = 13480832742402843594ULL;
_Bool var_27 = (_Bool)1;
unsigned int arr_3 [24] [24] ;
_Bool arr_4 [24] ;
unsigned int arr_11 [13] [13] [13] ;
unsigned char arr_12 [13] [13] ;
unsigned short arr_13 [13] [13] [13] [13] ;
long long int arr_18 [10] ;
long long int arr_2 [20] [20] ;
short arr_21 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 2883341319U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 792056017U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)47530;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = 9086342874723378631LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -4645694147453777376LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (short)19745;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
