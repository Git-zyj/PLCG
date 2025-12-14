#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24508;
signed char var_7 = (signed char)-122;
short var_8 = (short)-27903;
unsigned int var_9 = 2785577496U;
int zero = 0;
signed char var_16 = (signed char)79;
signed char var_17 = (signed char)-88;
unsigned char var_18 = (unsigned char)185;
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
