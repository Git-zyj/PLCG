#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)253;
short var_3 = (short)27306;
unsigned char var_4 = (unsigned char)107;
int var_5 = 1766067517;
short var_10 = (short)-10497;
unsigned long long int var_11 = 2320233494791768415ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)12058;
unsigned long long int var_17 = 16135738707668375284ULL;
int var_18 = 1067958452;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
