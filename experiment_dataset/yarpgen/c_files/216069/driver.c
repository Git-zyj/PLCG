#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 928555319;
signed char var_4 = (signed char)55;
unsigned long long int var_5 = 6478595211984515928ULL;
unsigned char var_6 = (unsigned char)238;
int zero = 0;
long long int var_16 = 1832062875463095923LL;
unsigned short var_17 = (unsigned short)27342;
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
