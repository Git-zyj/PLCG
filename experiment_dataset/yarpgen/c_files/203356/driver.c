#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2151734102U;
unsigned int var_2 = 2778700859U;
short var_4 = (short)-6501;
unsigned int var_11 = 1820228552U;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 1539038024;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
