#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)48591;
unsigned char var_11 = (unsigned char)226;
int var_13 = -2109256504;
short var_14 = (short)-4865;
int zero = 0;
int var_16 = 1828285785;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-26187;
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
