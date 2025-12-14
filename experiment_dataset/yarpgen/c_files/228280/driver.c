#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3837424451297395693LL;
unsigned short var_5 = (unsigned short)9988;
int var_6 = 763985210;
unsigned long long int var_11 = 11617432206488481139ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-15149;
unsigned char var_17 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
