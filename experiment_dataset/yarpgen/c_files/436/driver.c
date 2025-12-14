#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_13 = (short)-23014;
unsigned long long int var_17 = 12281003333025678463ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)184;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 6500950811946409579ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
