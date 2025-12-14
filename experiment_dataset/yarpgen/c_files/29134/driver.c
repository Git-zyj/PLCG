#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8213;
signed char var_1 = (signed char)39;
short var_3 = (short)22575;
short var_5 = (short)-3828;
int var_6 = 435945812;
int var_7 = -1781084796;
short var_10 = (short)-28146;
int zero = 0;
unsigned short var_14 = (unsigned short)22594;
unsigned short var_15 = (unsigned short)4087;
short var_16 = (short)2683;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
