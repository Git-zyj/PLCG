#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)89;
short var_5 = (short)32264;
long long int var_9 = -8133407336432749992LL;
unsigned short var_13 = (unsigned short)46546;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-22409;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)59221;
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
