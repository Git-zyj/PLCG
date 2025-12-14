#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1564849876;
short var_7 = (short)29749;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-123;
_Bool var_15 = (_Bool)1;
short var_16 = (short)21759;
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
