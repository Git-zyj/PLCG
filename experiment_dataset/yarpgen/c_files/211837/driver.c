#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)20;
long long int var_6 = -42899845723882154LL;
unsigned long long int var_7 = 5282451917904213851ULL;
unsigned char var_11 = (unsigned char)143;
int zero = 0;
short var_13 = (short)-22263;
unsigned char var_14 = (unsigned char)1;
unsigned short var_15 = (unsigned short)3370;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
