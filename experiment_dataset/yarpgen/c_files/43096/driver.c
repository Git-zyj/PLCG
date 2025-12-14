#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2136917532U;
signed char var_2 = (signed char)-48;
unsigned long long int var_3 = 11106547484418887380ULL;
unsigned int var_4 = 2490517751U;
unsigned long long int var_5 = 10510430644392249164ULL;
unsigned int var_6 = 1227110853U;
unsigned int var_7 = 1172845812U;
short var_8 = (short)-11832;
unsigned short var_9 = (unsigned short)22224;
unsigned long long int var_10 = 5597942386949912157ULL;
int zero = 0;
unsigned int var_11 = 2132878163U;
unsigned short var_12 = (unsigned short)58097;
unsigned char var_13 = (unsigned char)203;
unsigned short var_14 = (unsigned short)27754;
unsigned char arr_1 [25] ;
unsigned int arr_2 [25] ;
unsigned char arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1725780934U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)68;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
