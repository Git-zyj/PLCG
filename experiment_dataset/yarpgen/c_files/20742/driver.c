#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30825;
short var_3 = (short)-4881;
long long int var_4 = -7098300893886630182LL;
signed char var_5 = (signed char)50;
unsigned long long int var_6 = 14898426108329667811ULL;
int var_7 = -2067629939;
int zero = 0;
signed char var_11 = (signed char)82;
short var_12 = (short)24503;
int var_13 = -1782017642;
long long int var_14 = 2605629724804654529LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
