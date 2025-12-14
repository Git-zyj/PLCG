#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 268793897U;
_Bool var_6 = (_Bool)1;
unsigned char var_12 = (unsigned char)93;
long long int var_14 = -494356155873126683LL;
unsigned short var_15 = (unsigned short)7625;
int zero = 0;
unsigned char var_16 = (unsigned char)8;
unsigned long long int var_17 = 16171154700375771231ULL;
short var_18 = (short)-24625;
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
