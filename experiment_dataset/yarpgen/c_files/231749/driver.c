#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9787;
signed char var_4 = (signed char)-121;
short var_5 = (short)28772;
unsigned char var_7 = (unsigned char)68;
unsigned short var_10 = (unsigned short)61548;
unsigned int var_11 = 2743905470U;
unsigned int var_12 = 542216853U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2861940406U;
int zero = 0;
long long int var_15 = -3735459871923136622LL;
unsigned char var_16 = (unsigned char)226;
unsigned char var_17 = (unsigned char)129;
signed char var_18 = (signed char)-70;
long long int var_19 = -2395414609627254014LL;
unsigned short var_20 = (unsigned short)18019;
int var_21 = -820238778;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-88;
long long int var_24 = 454776817345956428LL;
unsigned int var_25 = 2482720754U;
signed char var_26 = (signed char)-120;
unsigned long long int var_27 = 9070222854704233627ULL;
signed char arr_1 [15] ;
int arr_2 [15] ;
_Bool arr_3 [15] [15] ;
_Bool arr_10 [15] [15] [15] [15] ;
unsigned int arr_5 [15] ;
unsigned int arr_14 [15] [15] ;
unsigned int arr_18 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -858959790;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 783660761U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = 3929581783U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = 3558144646U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
