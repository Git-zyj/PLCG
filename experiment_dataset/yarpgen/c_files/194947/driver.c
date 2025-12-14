#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
unsigned short var_13 = (unsigned short)63407;
unsigned short var_14 = (unsigned short)2765;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_17 = -1856258945;
unsigned int var_18 = 3862688079U;
void init() {
}

void checksum() {
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
