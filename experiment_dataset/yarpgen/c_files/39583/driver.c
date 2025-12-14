#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4204523105U;
signed char var_5 = (signed char)71;
_Bool var_6 = (_Bool)0;
unsigned long long int var_10 = 12531382213036861358ULL;
unsigned long long int var_11 = 6789102784614488342ULL;
int var_12 = -203074789;
unsigned int var_14 = 3225222272U;
int zero = 0;
unsigned int var_17 = 1448562082U;
int var_18 = -2021520590;
unsigned char var_19 = (unsigned char)177;
unsigned short var_20 = (unsigned short)25691;
signed char var_21 = (signed char)-65;
short var_22 = (short)19342;
int arr_0 [25] [25] ;
signed char arr_2 [25] ;
signed char arr_3 [25] [25] ;
short arr_4 [25] [25] [25] ;
unsigned short arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -1180097168;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-15909;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)54408;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
