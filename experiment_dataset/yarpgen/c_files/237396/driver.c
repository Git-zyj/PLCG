#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)225;
long long int var_10 = -8097580321386538992LL;
unsigned long long int var_13 = 18408900582930425965ULL;
signed char var_14 = (signed char)68;
int var_16 = 1870124556;
long long int var_17 = -3771869696312074381LL;
int zero = 0;
unsigned char var_19 = (unsigned char)253;
unsigned char var_20 = (unsigned char)134;
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
