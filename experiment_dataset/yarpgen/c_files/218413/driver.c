#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1626997212438634009ULL;
unsigned int var_6 = 4207111408U;
unsigned long long int var_7 = 5189430892230116042ULL;
int zero = 0;
signed char var_10 = (signed char)33;
signed char var_11 = (signed char)11;
unsigned int var_12 = 2047506739U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
