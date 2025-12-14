#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1559843719310826490ULL;
unsigned long long int var_3 = 15114100568599217754ULL;
signed char var_5 = (signed char)102;
unsigned int var_12 = 2224086769U;
short var_14 = (short)-4929;
int zero = 0;
unsigned short var_19 = (unsigned short)14108;
int var_20 = 2043841866;
unsigned short var_21 = (unsigned short)43433;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
