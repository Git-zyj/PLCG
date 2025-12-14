#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-7306;
long long int var_16 = -8489644859802637589LL;
unsigned long long int var_17 = 14822256829593633382ULL;
int zero = 0;
int var_19 = 1341376135;
long long int var_20 = 8586129247320381088LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
