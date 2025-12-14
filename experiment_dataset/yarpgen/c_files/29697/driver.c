#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16593199673885754845ULL;
unsigned int var_5 = 3635098958U;
signed char var_6 = (signed char)-94;
int zero = 0;
unsigned char var_10 = (unsigned char)220;
unsigned long long int var_11 = 916416287113931354ULL;
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
