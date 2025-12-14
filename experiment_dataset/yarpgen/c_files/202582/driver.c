#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3840287962U;
unsigned char var_5 = (unsigned char)226;
unsigned int var_6 = 2744817645U;
signed char var_8 = (signed char)122;
unsigned char var_11 = (unsigned char)81;
unsigned int var_13 = 3159069919U;
unsigned int var_14 = 1619762895U;
int zero = 0;
unsigned char var_15 = (unsigned char)72;
unsigned char var_16 = (unsigned char)130;
unsigned char var_17 = (unsigned char)130;
int var_18 = 337718867;
int arr_0 [18] [18] ;
unsigned char arr_1 [18] ;
int arr_2 [18] ;
unsigned short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 1350380369;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -1154008893;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)37422;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
