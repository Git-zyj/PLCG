#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)21;
unsigned char var_12 = (unsigned char)197;
unsigned char var_13 = (unsigned char)160;
int zero = 0;
unsigned char var_15 = (unsigned char)105;
unsigned long long int var_16 = 12850422104464669765ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
