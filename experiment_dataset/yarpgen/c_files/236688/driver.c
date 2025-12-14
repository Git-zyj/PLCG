#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)7332;
short var_8 = (short)2793;
unsigned char var_14 = (unsigned char)190;
unsigned long long int var_15 = 10604854693311902772ULL;
int zero = 0;
long long int var_17 = -2006202847786970654LL;
signed char var_18 = (signed char)126;
int var_19 = 1723102404;
int var_20 = 1312502894;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
