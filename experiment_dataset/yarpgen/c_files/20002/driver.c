#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -353022508;
signed char var_7 = (signed char)37;
unsigned long long int var_10 = 4997909319507509874ULL;
unsigned int var_11 = 338533971U;
unsigned int var_14 = 1638420853U;
int var_15 = 924943026;
int zero = 0;
int var_16 = 1177942484;
unsigned short var_17 = (unsigned short)40237;
unsigned short var_18 = (unsigned short)42848;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
