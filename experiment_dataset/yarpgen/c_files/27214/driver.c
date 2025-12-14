#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30630;
int var_2 = -542417176;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 13330616270302878980ULL;
unsigned short var_7 = (unsigned short)29505;
int var_8 = -1586163176;
int zero = 0;
unsigned int var_11 = 3293857488U;
short var_12 = (short)24484;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
