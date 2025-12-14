#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
unsigned int var_2 = 1382249913U;
unsigned char var_3 = (unsigned char)186;
unsigned long long int var_4 = 3920183389398572278ULL;
signed char var_8 = (signed char)-81;
unsigned long long int var_9 = 12973753496554428827ULL;
unsigned char var_10 = (unsigned char)107;
unsigned char var_12 = (unsigned char)42;
int zero = 0;
unsigned long long int var_14 = 11862787377398780126ULL;
unsigned long long int var_15 = 1468111213015766554ULL;
unsigned long long int var_16 = 1813061495834415179ULL;
unsigned short var_17 = (unsigned short)58509;
unsigned char arr_1 [18] ;
short arr_5 [18] ;
unsigned char arr_6 [18] [18] ;
int arr_9 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)-16418;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = -2064809855;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
