#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 714070087U;
unsigned short var_6 = (unsigned short)9386;
unsigned long long int var_11 = 5300964687448399615ULL;
signed char var_13 = (signed char)69;
int zero = 0;
unsigned int var_18 = 2424656366U;
int var_19 = -1260862008;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
