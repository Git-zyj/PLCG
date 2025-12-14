#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
signed char var_4 = (signed char)97;
unsigned long long int var_6 = 2326008285973934455ULL;
unsigned char var_12 = (unsigned char)95;
short var_14 = (short)-17519;
int zero = 0;
short var_15 = (short)925;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
