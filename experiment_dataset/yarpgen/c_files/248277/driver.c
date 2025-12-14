#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3129945770U;
unsigned char var_1 = (unsigned char)113;
unsigned char var_9 = (unsigned char)75;
int zero = 0;
unsigned long long int var_10 = 1698894494604744012ULL;
unsigned short var_11 = (unsigned short)11303;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
