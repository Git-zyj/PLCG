#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_6 = (unsigned char)186;
unsigned char var_8 = (unsigned char)83;
unsigned int var_11 = 3599487303U;
unsigned int var_12 = 3706155050U;
int zero = 0;
short var_16 = (short)-16279;
short var_17 = (short)31711;
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
