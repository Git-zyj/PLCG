#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1856490694U;
signed char var_3 = (signed char)24;
unsigned long long int var_6 = 2160142266813291549ULL;
unsigned short var_10 = (unsigned short)61178;
unsigned short var_12 = (unsigned short)24511;
unsigned int var_15 = 2255590009U;
int zero = 0;
unsigned int var_16 = 199105936U;
unsigned char var_17 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
