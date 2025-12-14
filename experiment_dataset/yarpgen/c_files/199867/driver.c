#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14965;
int var_5 = -267545689;
unsigned long long int var_6 = 10329577931234405909ULL;
int var_14 = -1615865824;
int zero = 0;
long long int var_15 = 8757914514272079513LL;
int var_16 = -1568061379;
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
