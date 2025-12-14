#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_9 = (unsigned short)5666;
unsigned short var_10 = (unsigned short)1038;
_Bool var_12 = (_Bool)1;
short var_15 = (short)-1209;
int zero = 0;
int var_16 = -1422639463;
int var_17 = 1074546676;
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
