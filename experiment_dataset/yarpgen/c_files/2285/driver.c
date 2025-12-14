#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29214;
unsigned int var_4 = 1752335562U;
unsigned long long int var_12 = 1614065013777998757ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)2797;
unsigned int var_16 = 3692304933U;
long long int var_17 = -1860345486446788788LL;
unsigned char var_18 = (unsigned char)159;
void init() {
}

void checksum() {
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
