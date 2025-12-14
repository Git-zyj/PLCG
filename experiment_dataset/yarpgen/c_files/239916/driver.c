#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 24067473U;
signed char var_5 = (signed char)-98;
signed char var_8 = (signed char)(-127 - 1);
unsigned long long int var_9 = 11105939339068147625ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)213;
unsigned char var_16 = (unsigned char)60;
unsigned int var_17 = 3936983922U;
unsigned long long int var_18 = 4551348586457963282ULL;
short arr_4 [16] ;
signed char arr_6 [16] ;
unsigned int arr_11 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)30128;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1659274825U;
}

void checksum() {
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
