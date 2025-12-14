#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4166668792U;
unsigned short var_10 = (unsigned short)60884;
signed char var_11 = (signed char)-41;
int zero = 0;
unsigned char var_14 = (unsigned char)193;
short var_15 = (short)-31034;
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
