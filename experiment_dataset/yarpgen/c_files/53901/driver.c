#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 2520533437139704056ULL;
unsigned short var_15 = (unsigned short)35724;
unsigned int var_19 = 2056065154U;
int zero = 0;
unsigned char var_20 = (unsigned char)126;
int var_21 = -1819049360;
unsigned long long int var_22 = 13447217604326007295ULL;
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
