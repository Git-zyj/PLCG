#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
int var_4 = -1741399124;
unsigned short var_5 = (unsigned short)20805;
int var_9 = -1666254384;
long long int var_13 = -3949336003802521872LL;
int zero = 0;
signed char var_19 = (signed char)103;
signed char var_20 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
