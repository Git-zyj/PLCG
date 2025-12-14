#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1207076079;
int var_2 = -453672197;
short var_6 = (short)1736;
unsigned short var_8 = (unsigned short)24984;
unsigned long long int var_10 = 16246036410056132722ULL;
short var_13 = (short)30940;
int var_15 = 1707876523;
unsigned short var_17 = (unsigned short)61251;
int zero = 0;
unsigned char var_18 = (unsigned char)128;
unsigned long long int var_19 = 8804704269897392035ULL;
unsigned char var_20 = (unsigned char)120;
unsigned short var_21 = (unsigned short)17837;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
