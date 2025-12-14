#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
int var_1 = 979911724;
long long int var_2 = 7070290436120800717LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)61387;
signed char var_6 = (signed char)110;
int zero = 0;
long long int var_10 = 7374117377565533251LL;
signed char var_11 = (signed char)121;
short var_12 = (short)-19148;
signed char var_13 = (signed char)-108;
unsigned char var_14 = (unsigned char)36;
int var_15 = 1846977956;
int var_16 = 1240887985;
unsigned int arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
signed char arr_2 [19] ;
_Bool arr_4 [15] [15] ;
short arr_5 [15] ;
unsigned char arr_6 [15] ;
unsigned short arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3407842672U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)-15579;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29093 : (unsigned short)53674;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
