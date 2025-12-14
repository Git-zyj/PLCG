#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 23189618;
unsigned short var_1 = (unsigned short)58337;
unsigned short var_2 = (unsigned short)181;
int zero = 0;
unsigned int var_15 = 332469760U;
long long int var_16 = -8314541301690038492LL;
unsigned char var_17 = (unsigned char)204;
unsigned char var_18 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
