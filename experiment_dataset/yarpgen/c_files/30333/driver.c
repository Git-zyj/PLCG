#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = 1321144574;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 2057052479149284061ULL;
signed char var_17 = (signed char)84;
unsigned short var_18 = (unsigned short)47579;
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
