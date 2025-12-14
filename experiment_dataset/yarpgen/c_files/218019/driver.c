#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52634;
unsigned int var_7 = 1842456932U;
short var_8 = (short)-4720;
_Bool var_11 = (_Bool)0;
int var_12 = 1050690597;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)39922;
unsigned long long int var_15 = 13997674631479164807ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
