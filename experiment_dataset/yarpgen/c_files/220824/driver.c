#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)45455;
int var_5 = -87044874;
short var_6 = (short)3986;
int var_7 = -1579495798;
unsigned int var_8 = 1166439081U;
short var_9 = (short)-18580;
unsigned int var_12 = 1476444837U;
unsigned int var_14 = 2509256338U;
int var_15 = 1370610765;
unsigned short var_16 = (unsigned short)36019;
int zero = 0;
unsigned short var_17 = (unsigned short)7931;
short var_18 = (short)19043;
unsigned short var_19 = (unsigned short)19418;
short var_20 = (short)31762;
int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1655734948;
}

void checksum() {
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
