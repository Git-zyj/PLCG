#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7292933622920579877LL;
short var_8 = (short)16104;
unsigned char var_9 = (unsigned char)166;
int zero = 0;
unsigned char var_16 = (unsigned char)13;
int var_17 = 1191385503;
void init() {
}

void checksum() {
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
