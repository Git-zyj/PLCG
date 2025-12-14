#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28673;
unsigned short var_1 = (unsigned short)23332;
unsigned short var_5 = (unsigned short)17124;
int zero = 0;
short var_12 = (short)24884;
unsigned int var_13 = 3911510290U;
long long int var_14 = 103057059447400002LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
