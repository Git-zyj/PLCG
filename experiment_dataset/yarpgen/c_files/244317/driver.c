#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 848622363131673398LL;
short var_6 = (short)-7005;
unsigned char var_7 = (unsigned char)55;
short var_8 = (short)-6341;
int zero = 0;
long long int var_11 = -8712892718686114537LL;
unsigned int var_12 = 1361472229U;
unsigned char var_13 = (unsigned char)90;
unsigned int var_14 = 119029000U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
