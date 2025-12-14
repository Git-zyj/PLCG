#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1246124424;
unsigned int var_2 = 286405863U;
unsigned char var_3 = (unsigned char)110;
signed char var_5 = (signed char)-78;
unsigned long long int var_6 = 8574031120007761278ULL;
int var_7 = 100900467;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 777090673U;
unsigned long long int var_12 = 14095391817177895323ULL;
signed char var_14 = (signed char)55;
int zero = 0;
unsigned char var_15 = (unsigned char)219;
unsigned long long int var_16 = 16836915869860308959ULL;
unsigned char var_17 = (unsigned char)218;
unsigned int var_18 = 81088121U;
signed char var_19 = (signed char)-102;
int var_20 = 245143501;
int arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
unsigned int arr_2 [22] [22] [22] ;
int arr_3 [22] [22] ;
signed char arr_4 [22] ;
signed char arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 223418875 : 533286471;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 13699607818815005723ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2307629071U : 261811839U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 1713706601;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)63 : (signed char)-111;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)45 : (signed char)-7;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
