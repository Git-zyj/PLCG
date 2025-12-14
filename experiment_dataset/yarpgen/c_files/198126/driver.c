#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)91;
int var_2 = 777968820;
unsigned char var_4 = (unsigned char)52;
int var_6 = -2098832300;
unsigned char var_7 = (unsigned char)64;
unsigned short var_8 = (unsigned short)46264;
int var_9 = 1610443660;
int var_10 = 1638572117;
int zero = 0;
unsigned char var_11 = (unsigned char)199;
short var_12 = (short)-4719;
int var_13 = -1766587220;
int var_14 = -1391837779;
int var_15 = 1703660862;
unsigned char var_16 = (unsigned char)184;
int arr_3 [20] [20] ;
short arr_8 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 1877724927;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (short)28550;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
