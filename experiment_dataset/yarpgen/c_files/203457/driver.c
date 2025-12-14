#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
short var_10 = (short)-15599;
unsigned int var_14 = 735715046U;
short var_15 = (short)11279;
int zero = 0;
long long int var_16 = -4384560198496152931LL;
short var_17 = (short)29489;
signed char var_18 = (signed char)99;
void init() {
}

void checksum() {
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
