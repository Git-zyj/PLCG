#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-25047;
long long int var_8 = -5756969174815061313LL;
short var_12 = (short)-14337;
unsigned int var_15 = 3019002001U;
int zero = 0;
short var_19 = (short)-31970;
unsigned int var_20 = 1990028974U;
long long int var_21 = -5654909101706855673LL;
short var_22 = (short)4375;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
