#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -858726734;
int var_2 = -99596936;
unsigned char var_5 = (unsigned char)110;
unsigned char var_7 = (unsigned char)177;
unsigned int var_8 = 364577626U;
unsigned int var_12 = 2126526293U;
unsigned long long int var_15 = 14872616236868720111ULL;
int zero = 0;
short var_16 = (short)9635;
long long int var_17 = 8049766344821293003LL;
unsigned char var_18 = (unsigned char)32;
unsigned char var_19 = (unsigned char)34;
int var_20 = -1009585951;
int var_21 = 19426657;
unsigned char var_22 = (unsigned char)128;
unsigned char var_23 = (unsigned char)127;
unsigned char arr_0 [25] [25] ;
int arr_3 [25] [25] [25] ;
short arr_4 [25] [25] [25] ;
unsigned char arr_5 [25] [25] ;
unsigned char arr_6 [25] [25] [25] ;
unsigned char arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2096989750;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-22231;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned char)84;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
