#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 931315482U;
unsigned short var_10 = (unsigned short)65072;
long long int var_14 = 2294064183397935344LL;
int zero = 0;
unsigned short var_15 = (unsigned short)36771;
int var_16 = 1794677402;
short var_17 = (short)-5857;
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
