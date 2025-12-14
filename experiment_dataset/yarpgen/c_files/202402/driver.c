#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6488;
short var_3 = (short)-30378;
short var_5 = (short)-6218;
unsigned long long int var_7 = 10025220623134160528ULL;
unsigned int var_9 = 1061458999U;
short var_10 = (short)-18623;
int zero = 0;
unsigned short var_11 = (unsigned short)34816;
signed char var_12 = (signed char)-110;
unsigned short var_13 = (unsigned short)63313;
int var_14 = -958962010;
unsigned short var_15 = (unsigned short)10919;
unsigned long long int arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 889690017814117799ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
