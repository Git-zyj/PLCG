#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)74;
unsigned int var_1 = 228714810U;
unsigned int var_6 = 3204318320U;
signed char var_9 = (signed char)60;
int zero = 0;
signed char var_12 = (signed char)87;
unsigned char var_13 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
