#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2102517739;
long long int var_1 = -2966378919230297610LL;
unsigned char var_2 = (unsigned char)171;
unsigned char var_3 = (unsigned char)83;
long long int var_5 = 5898450256674675162LL;
int var_7 = 1701236729;
unsigned char var_8 = (unsigned char)178;
unsigned char var_9 = (unsigned char)38;
unsigned int var_10 = 1463714536U;
int zero = 0;
unsigned int var_16 = 1271505210U;
unsigned int var_17 = 2630396384U;
signed char var_18 = (signed char)119;
_Bool var_19 = (_Bool)1;
long long int var_20 = 4454861473461209029LL;
unsigned int var_21 = 3233181686U;
_Bool var_22 = (_Bool)0;
int var_23 = 646762350;
int var_24 = -1131642168;
unsigned long long int var_25 = 7699548427504925808ULL;
unsigned char var_26 = (unsigned char)216;
unsigned int arr_1 [15] [15] ;
long long int arr_2 [15] ;
signed char arr_4 [15] [15] [15] ;
int arr_6 [15] [15] [15] ;
unsigned char arr_11 [15] [15] [15] [15] ;
long long int arr_12 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 1518394142U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -4609248890601822288LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1903463485;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = -4699920313435858113LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
