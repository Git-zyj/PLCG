#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3296855703U;
short var_1 = (short)29102;
int var_5 = 536398393;
short var_8 = (short)-27881;
unsigned short var_10 = (unsigned short)20246;
int zero = 0;
unsigned short var_13 = (unsigned short)65060;
int var_14 = -356126112;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
