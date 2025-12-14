#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)11136;
signed char var_10 = (signed char)18;
unsigned char var_12 = (unsigned char)5;
int zero = 0;
unsigned int var_15 = 1360752694U;
short var_16 = (short)-2948;
unsigned int var_17 = 3592185467U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
