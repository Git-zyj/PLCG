#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
short var_5 = (short)6720;
short var_6 = (short)28869;
short var_11 = (short)15026;
int zero = 0;
unsigned int var_14 = 3927412335U;
unsigned char var_15 = (unsigned char)140;
unsigned short var_16 = (unsigned short)45130;
unsigned int var_17 = 1037422739U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
