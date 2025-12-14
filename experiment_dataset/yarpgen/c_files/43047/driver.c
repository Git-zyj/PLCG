#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10731;
short var_3 = (short)-15908;
unsigned char var_6 = (unsigned char)238;
signed char var_8 = (signed char)24;
int zero = 0;
short var_11 = (short)355;
short var_12 = (short)2025;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
