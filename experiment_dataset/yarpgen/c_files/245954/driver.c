#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2212318811290061759LL;
unsigned char var_5 = (unsigned char)32;
unsigned long long int var_14 = 2645598117002783879ULL;
unsigned long long int var_16 = 10424093455991415897ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)243;
short var_18 = (short)8078;
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
