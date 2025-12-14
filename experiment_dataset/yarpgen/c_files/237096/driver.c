#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3060127865357472264ULL;
unsigned int var_7 = 205675523U;
unsigned long long int var_9 = 8326608135150964571ULL;
unsigned char var_11 = (unsigned char)248;
int var_13 = 2067170627;
int zero = 0;
unsigned int var_14 = 4264736414U;
unsigned long long int var_15 = 12976072327956556563ULL;
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
