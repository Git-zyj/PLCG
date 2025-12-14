#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_5 = -2739303955155424314LL;
unsigned int var_8 = 1314545632U;
signed char var_9 = (signed char)-87;
int var_11 = -589494071;
unsigned int var_12 = 4053200065U;
int zero = 0;
unsigned int var_15 = 3861231695U;
unsigned int var_16 = 3722133301U;
void init() {
}

void checksum() {
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
