#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
unsigned char var_1 = (unsigned char)237;
unsigned char var_2 = (unsigned char)95;
unsigned char var_3 = (unsigned char)173;
int zero = 0;
int var_11 = -366856443;
signed char var_12 = (signed char)3;
void init() {
}

void checksum() {
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
