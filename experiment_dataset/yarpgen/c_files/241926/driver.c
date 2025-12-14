#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2913348424U;
signed char var_5 = (signed char)-52;
long long int var_9 = -9040420865876245547LL;
short var_11 = (short)21537;
int zero = 0;
unsigned char var_16 = (unsigned char)79;
int var_17 = 1491312820;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
