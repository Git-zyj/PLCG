#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3565621996U;
unsigned short var_11 = (unsigned short)21372;
unsigned short var_12 = (unsigned short)27299;
unsigned int var_17 = 651677415U;
int zero = 0;
unsigned short var_20 = (unsigned short)17978;
unsigned short var_21 = (unsigned short)38290;
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
