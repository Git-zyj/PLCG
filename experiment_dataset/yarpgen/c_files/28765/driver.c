#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4096665635U;
unsigned char var_12 = (unsigned char)146;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)9;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 13174887201770265809ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
