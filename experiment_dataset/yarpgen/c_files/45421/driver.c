#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1636403826530602466LL;
int var_3 = -1784414052;
short var_7 = (short)-14212;
short var_8 = (short)4419;
int zero = 0;
long long int var_12 = -1594557423534446860LL;
signed char var_13 = (signed char)-54;
short var_14 = (short)-14030;
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
