#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22930;
short var_5 = (short)-2364;
short var_6 = (short)2826;
short var_7 = (short)31387;
short var_13 = (short)-32255;
int zero = 0;
short var_17 = (short)17476;
short var_18 = (short)8889;
short var_19 = (short)-6764;
void init() {
}

void checksum() {
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
