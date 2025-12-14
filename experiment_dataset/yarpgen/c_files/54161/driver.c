#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16409;
int var_7 = -1956768416;
_Bool var_12 = (_Bool)1;
int var_13 = 347007830;
int zero = 0;
short var_14 = (short)-22312;
unsigned char var_15 = (unsigned char)58;
int var_16 = 1720916746;
int var_17 = -1527424903;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
