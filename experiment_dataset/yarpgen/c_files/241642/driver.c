#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1670949778;
unsigned char var_2 = (unsigned char)221;
int var_12 = -1703081978;
_Bool var_17 = (_Bool)0;
short var_19 = (short)4579;
int zero = 0;
short var_20 = (short)18442;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-13866;
short var_23 = (short)23506;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
