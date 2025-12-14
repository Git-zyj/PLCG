#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_6 = 2127187700;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)241;
int zero = 0;
int var_16 = -1754389909;
int var_17 = -2085661894;
unsigned int var_18 = 1905053131U;
unsigned char var_19 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
