#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)149;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)27182;
short var_9 = (short)-22676;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 6869741616503433543ULL;
int var_13 = -1475178711;
int var_14 = 1543359996;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
