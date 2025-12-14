#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9450531260723323024ULL;
unsigned short var_6 = (unsigned short)49074;
int zero = 0;
short var_20 = (short)32315;
unsigned int var_21 = 1755094009U;
unsigned short var_22 = (unsigned short)10316;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
