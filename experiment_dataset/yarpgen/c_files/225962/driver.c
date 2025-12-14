#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_7 = 1387491581U;
int var_11 = -1814639152;
int var_13 = 11435733;
unsigned short var_18 = (unsigned short)8531;
int zero = 0;
short var_20 = (short)6089;
short var_21 = (short)7339;
short var_22 = (short)28333;
void init() {
}

void checksum() {
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
