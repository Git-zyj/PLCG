#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50558;
unsigned long long int var_8 = 14437589401576264416ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)50945;
int var_11 = -1636482973;
unsigned char var_12 = (unsigned char)186;
unsigned char var_13 = (unsigned char)252;
unsigned char var_14 = (unsigned char)169;
unsigned long long int var_15 = 15714270838632093209ULL;
unsigned long long int var_16 = 16540821629489558574ULL;
unsigned long long int var_17 = 14073791720913063204ULL;
int var_18 = 742452978;
unsigned short arr_1 [23] [23] ;
short arr_3 [23] [23] [23] ;
int arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)29696;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)20223 : (short)461;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = -1486577304;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
