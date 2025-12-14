#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)242;
short var_4 = (short)-22975;
int var_5 = -777106997;
unsigned char var_8 = (unsigned char)212;
int zero = 0;
long long int var_12 = -6742973443048598657LL;
unsigned char var_13 = (unsigned char)198;
short var_14 = (short)26428;
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
