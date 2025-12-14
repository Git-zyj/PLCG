#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1802092759;
short var_1 = (short)-32518;
_Bool var_2 = (_Bool)0;
int var_13 = 1487561617;
int zero = 0;
short var_16 = (short)3900;
short var_17 = (short)-23900;
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
