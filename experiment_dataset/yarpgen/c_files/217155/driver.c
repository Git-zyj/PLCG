#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1519722018;
signed char var_12 = (signed char)-68;
signed char var_16 = (signed char)107;
short var_17 = (short)-30522;
int zero = 0;
signed char var_20 = (signed char)46;
unsigned char var_21 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
