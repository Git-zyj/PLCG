#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9133282199571144590LL;
unsigned int var_4 = 1337880131U;
unsigned long long int var_12 = 13651194916478677048ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)34304;
unsigned char var_14 = (unsigned char)236;
unsigned int var_15 = 2518107604U;
unsigned char var_16 = (unsigned char)66;
int var_17 = 80653695;
signed char var_18 = (signed char)110;
short arr_2 [12] ;
long long int arr_4 [12] [12] [12] ;
short arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)4019;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 4038320650291566810LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)7504;
}

void checksum() {
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
