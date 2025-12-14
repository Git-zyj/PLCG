#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15776;
unsigned int var_3 = 3822277584U;
unsigned char var_6 = (unsigned char)68;
unsigned short var_9 = (unsigned short)22396;
signed char var_13 = (signed char)-126;
int zero = 0;
unsigned long long int var_16 = 1906083115516470637ULL;
long long int var_17 = -7813458419626902384LL;
void init() {
}

void checksum() {
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
