#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_7 = -9054418145002929140LL;
int var_8 = 398369049;
short var_12 = (short)-9843;
int zero = 0;
unsigned short var_15 = (unsigned short)12745;
short var_16 = (short)-1186;
int var_17 = 623270122;
long long int var_18 = 4014490734553225718LL;
signed char var_19 = (signed char)49;
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
