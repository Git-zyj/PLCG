#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
int var_6 = -28678973;
int var_9 = 1398714307;
int var_10 = -785148714;
long long int var_12 = -7373185511258980999LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)22405;
unsigned char var_16 = (unsigned char)200;
short var_17 = (short)-14166;
void init() {
}

void checksum() {
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
