#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)24404;
short var_9 = (short)10440;
unsigned int var_11 = 1238800563U;
unsigned short var_12 = (unsigned short)18457;
int zero = 0;
signed char var_15 = (signed char)40;
unsigned int var_16 = 2585612082U;
unsigned int var_17 = 1625299042U;
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
