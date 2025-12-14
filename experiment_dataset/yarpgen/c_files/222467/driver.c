#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7355994251246091865LL;
unsigned short var_2 = (unsigned short)12601;
unsigned int var_4 = 2104241431U;
unsigned int var_5 = 1849958692U;
int zero = 0;
unsigned char var_16 = (unsigned char)13;
long long int var_17 = 1378055532502434119LL;
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
