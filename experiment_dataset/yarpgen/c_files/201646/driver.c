#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4912612709344261905LL;
unsigned long long int var_7 = 55543098289491800ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)233;
long long int var_16 = -8107874836993654003LL;
unsigned char var_17 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
