#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)49;
unsigned char var_1 = (unsigned char)171;
short var_3 = (short)28020;
unsigned int var_4 = 805075065U;
unsigned char var_7 = (unsigned char)61;
unsigned char var_9 = (unsigned char)121;
unsigned int var_10 = 2007211788U;
unsigned int var_14 = 564756335U;
int zero = 0;
unsigned int var_15 = 560711071U;
long long int var_16 = 8590823505023100965LL;
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
