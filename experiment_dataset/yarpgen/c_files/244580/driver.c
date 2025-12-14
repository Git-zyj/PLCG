#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2311926780U;
unsigned char var_5 = (unsigned char)196;
unsigned int var_11 = 1772416626U;
unsigned char var_12 = (unsigned char)207;
int zero = 0;
unsigned char var_16 = (unsigned char)25;
short var_17 = (short)-25512;
long long int var_18 = 2556634512055520681LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
