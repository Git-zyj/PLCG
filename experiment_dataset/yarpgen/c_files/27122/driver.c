#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1527467429;
signed char var_8 = (signed char)23;
signed char var_9 = (signed char)30;
short var_10 = (short)-10;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1721484441397924947ULL;
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
