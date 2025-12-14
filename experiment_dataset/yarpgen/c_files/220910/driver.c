#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2479532230U;
unsigned char var_9 = (unsigned char)79;
int zero = 0;
unsigned long long int var_10 = 6316195564078031915ULL;
unsigned long long int var_11 = 4855800012969191247ULL;
signed char var_12 = (signed char)-79;
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
