#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2869685295U;
unsigned int var_7 = 4269439211U;
long long int var_10 = -2379015687381000153LL;
unsigned char var_12 = (unsigned char)218;
unsigned long long int var_14 = 4870416545888108277ULL;
int zero = 0;
short var_15 = (short)-8316;
unsigned long long int var_16 = 9104468276639941688ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
