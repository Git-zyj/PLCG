#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19471;
int var_6 = 875564731;
int var_7 = -563264099;
unsigned short var_10 = (unsigned short)48195;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -1150307813;
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
