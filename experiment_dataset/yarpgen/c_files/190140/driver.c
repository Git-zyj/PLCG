#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17642;
unsigned short var_5 = (unsigned short)23531;
signed char var_9 = (signed char)-98;
int zero = 0;
signed char var_15 = (signed char)88;
short var_16 = (short)-9356;
unsigned char var_17 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
