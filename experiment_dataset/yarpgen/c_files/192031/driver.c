#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)32443;
unsigned long long int var_4 = 12183152615820720628ULL;
unsigned char var_12 = (unsigned char)239;
short var_13 = (short)-31388;
long long int var_14 = -252320479251914667LL;
int zero = 0;
unsigned long long int var_16 = 2238082084994445421ULL;
long long int var_17 = -417561220292455921LL;
void init() {
}

void checksum() {
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
