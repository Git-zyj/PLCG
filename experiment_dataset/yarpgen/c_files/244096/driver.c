#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
signed char var_7 = (signed char)63;
signed char var_9 = (signed char)113;
unsigned int var_14 = 3109954249U;
int zero = 0;
unsigned short var_19 = (unsigned short)51270;
short var_20 = (short)-16904;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
