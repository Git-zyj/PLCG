#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2768477101U;
int var_1 = -808000402;
_Bool var_3 = (_Bool)0;
short var_4 = (short)2990;
unsigned long long int var_5 = 14925276802668835621ULL;
unsigned char var_6 = (unsigned char)36;
unsigned char var_7 = (unsigned char)60;
unsigned short var_8 = (unsigned short)54788;
unsigned long long int var_9 = 15210903666626339782ULL;
unsigned char var_10 = (unsigned char)38;
unsigned short var_12 = (unsigned short)45881;
long long int var_13 = -1811518546300675456LL;
short var_15 = (short)-27333;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)-2502;
unsigned short var_18 = (unsigned short)43911;
long long int var_19 = -3226191073564505606LL;
unsigned short arr_2 [16] [16] ;
unsigned long long int arr_3 [16] ;
signed char arr_6 [15] ;
unsigned long long int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)31493;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 9042620713517970486ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 11436767586545689314ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
