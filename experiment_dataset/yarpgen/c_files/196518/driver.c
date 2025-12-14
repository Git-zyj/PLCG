#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23988;
unsigned char var_4 = (unsigned char)49;
unsigned char var_12 = (unsigned char)78;
int zero = 0;
long long int var_14 = 3086027445466187908LL;
unsigned int var_15 = 1816622463U;
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
