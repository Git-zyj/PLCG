#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2061515930;
unsigned int var_5 = 2345707180U;
signed char var_9 = (signed char)-46;
int zero = 0;
unsigned long long int var_10 = 1900787660854506879ULL;
unsigned long long int var_11 = 12499190595586139644ULL;
unsigned long long int var_12 = 9319405589282341050ULL;
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
