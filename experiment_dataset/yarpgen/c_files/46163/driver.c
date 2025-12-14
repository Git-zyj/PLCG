#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5648281989364847797LL;
unsigned short var_3 = (unsigned short)45138;
unsigned int var_8 = 1115807407U;
unsigned short var_12 = (unsigned short)36634;
int zero = 0;
unsigned int var_15 = 4095057720U;
unsigned int var_16 = 2055944203U;
short var_17 = (short)-13168;
signed char var_18 = (signed char)-42;
short var_19 = (short)32501;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
