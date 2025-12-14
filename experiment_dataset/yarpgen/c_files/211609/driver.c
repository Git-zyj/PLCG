#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned int var_1 = 2182860056U;
unsigned char var_11 = (unsigned char)22;
signed char var_13 = (signed char)73;
unsigned char var_14 = (unsigned char)198;
int zero = 0;
unsigned char var_15 = (unsigned char)178;
unsigned int var_16 = 3093371303U;
signed char var_17 = (signed char)-84;
short var_18 = (short)-17665;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
