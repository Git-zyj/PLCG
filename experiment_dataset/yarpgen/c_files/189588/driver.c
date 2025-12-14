#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1856082970;
unsigned short var_7 = (unsigned short)18158;
unsigned short var_12 = (unsigned short)20372;
int var_14 = -2092037120;
int zero = 0;
int var_15 = -1359664960;
int var_16 = -1133142189;
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
