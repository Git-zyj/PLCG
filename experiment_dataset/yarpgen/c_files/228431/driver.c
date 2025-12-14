#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)28;
unsigned char var_8 = (unsigned char)119;
unsigned int var_11 = 3538776651U;
unsigned int var_13 = 1041193037U;
unsigned int var_15 = 1853237274U;
int zero = 0;
unsigned int var_16 = 1100222816U;
unsigned int var_17 = 1301020596U;
void init() {
}

void checksum() {
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
