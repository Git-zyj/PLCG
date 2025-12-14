#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35136;
int var_3 = 857127045;
unsigned short var_4 = (unsigned short)54562;
int var_5 = -316634011;
unsigned short var_6 = (unsigned short)2396;
int var_9 = 1143857501;
unsigned short var_11 = (unsigned short)5804;
unsigned short var_12 = (unsigned short)435;
unsigned short var_13 = (unsigned short)54426;
int zero = 0;
unsigned short var_14 = (unsigned short)32577;
int var_15 = 1746324321;
unsigned short var_16 = (unsigned short)55137;
unsigned short var_17 = (unsigned short)12142;
int var_18 = -1580822992;
unsigned short arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)36043;
}

void checksum() {
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
