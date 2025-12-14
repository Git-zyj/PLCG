#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1531880608U;
long long int var_10 = -6504608340682814793LL;
unsigned short var_11 = (unsigned short)30886;
unsigned int var_13 = 2454806302U;
short var_15 = (short)-19969;
unsigned char var_19 = (unsigned char)240;
int zero = 0;
unsigned int var_20 = 3014132159U;
int var_21 = -495757325;
short var_22 = (short)29980;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
