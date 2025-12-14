#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)140;
unsigned char var_5 = (unsigned char)157;
unsigned int var_9 = 2744229797U;
int zero = 0;
unsigned long long int var_12 = 4135732757943767702ULL;
signed char var_13 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
