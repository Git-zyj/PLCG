#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)206;
long long int var_9 = -815340473305991132LL;
unsigned char var_13 = (unsigned char)11;
int zero = 0;
long long int var_16 = -5963418019446144604LL;
unsigned char var_17 = (unsigned char)129;
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
