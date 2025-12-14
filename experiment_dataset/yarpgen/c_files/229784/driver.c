#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7606462490520010269LL;
unsigned char var_6 = (unsigned char)61;
signed char var_8 = (signed char)106;
int zero = 0;
int var_14 = 690131979;
unsigned long long int var_15 = 13420308834919017724ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
