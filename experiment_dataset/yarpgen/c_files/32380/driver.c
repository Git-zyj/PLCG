#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1475589614;
long long int var_5 = 6208956572284157777LL;
unsigned short var_6 = (unsigned short)42461;
unsigned short var_9 = (unsigned short)8598;
short var_11 = (short)-7136;
int zero = 0;
long long int var_13 = -7404234227453001403LL;
long long int var_14 = -3410201295151522082LL;
int var_15 = -474413419;
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
