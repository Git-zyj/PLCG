#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24256;
short var_1 = (short)22435;
long long int var_3 = -16250160079182901LL;
long long int var_4 = -2449593038181631365LL;
short var_7 = (short)24522;
unsigned short var_8 = (unsigned short)3531;
short var_10 = (short)-30013;
int zero = 0;
unsigned short var_12 = (unsigned short)40039;
unsigned short var_13 = (unsigned short)45555;
unsigned short var_14 = (unsigned short)12652;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
