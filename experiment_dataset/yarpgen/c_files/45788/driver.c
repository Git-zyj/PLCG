#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)1496;
unsigned short var_9 = (unsigned short)24281;
short var_13 = (short)-16344;
int zero = 0;
short var_16 = (short)30980;
unsigned char var_17 = (unsigned char)49;
signed char var_18 = (signed char)71;
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
