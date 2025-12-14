#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14135;
short var_1 = (short)-15383;
short var_2 = (short)23400;
short var_3 = (short)12211;
short var_5 = (short)22910;
short var_6 = (short)13891;
short var_7 = (short)17548;
short var_8 = (short)-8750;
short var_9 = (short)-13607;
short var_10 = (short)-26763;
short var_13 = (short)-17041;
int zero = 0;
short var_16 = (short)13126;
short var_17 = (short)-30505;
short var_18 = (short)-18456;
short var_19 = (short)-18321;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
