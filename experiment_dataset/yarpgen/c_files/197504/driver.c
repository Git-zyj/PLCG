#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2668254217U;
signed char var_10 = (signed char)-84;
signed char var_11 = (signed char)81;
unsigned char var_14 = (unsigned char)204;
unsigned char var_15 = (unsigned char)131;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 17312867418091135992ULL;
void init() {
}

void checksum() {
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
