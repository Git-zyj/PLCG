#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3183723381U;
short var_3 = (short)-9474;
short var_7 = (short)-18932;
int var_12 = -504078169;
signed char var_14 = (signed char)80;
int zero = 0;
unsigned long long int var_15 = 670861143067893251ULL;
short var_16 = (short)-24031;
short var_17 = (short)21842;
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
