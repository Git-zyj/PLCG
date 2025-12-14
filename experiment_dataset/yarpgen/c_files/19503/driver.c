#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6803;
short var_5 = (short)-31774;
unsigned long long int var_8 = 7508139049566419250ULL;
_Bool var_11 = (_Bool)0;
short var_14 = (short)32401;
int zero = 0;
unsigned short var_15 = (unsigned short)50990;
long long int var_16 = -7429218808344859316LL;
unsigned short var_17 = (unsigned short)24497;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-15119;
long long int var_20 = -5668268545176228861LL;
unsigned int arr_3 [15] [15] ;
short arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 1517545390U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-31960;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
