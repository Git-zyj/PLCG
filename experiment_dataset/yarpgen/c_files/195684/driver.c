#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12114;
short var_4 = (short)-17667;
unsigned int var_11 = 4031769406U;
int zero = 0;
short var_15 = (short)24380;
short var_16 = (short)28842;
unsigned char var_17 = (unsigned char)27;
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
