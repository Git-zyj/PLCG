#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1013139541;
unsigned char var_8 = (unsigned char)20;
signed char var_9 = (signed char)0;
int zero = 0;
unsigned int var_14 = 329494573U;
signed char var_15 = (signed char)-40;
short var_16 = (short)-5095;
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
