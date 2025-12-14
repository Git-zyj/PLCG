#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 941284542U;
unsigned char var_6 = (unsigned char)239;
unsigned char var_10 = (unsigned char)61;
signed char var_13 = (signed char)56;
int zero = 0;
unsigned int var_20 = 3880623025U;
unsigned char var_21 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
