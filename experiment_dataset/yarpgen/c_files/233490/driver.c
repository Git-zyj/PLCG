#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)22086;
int var_5 = -1813974315;
short var_9 = (short)7551;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 1011982768U;
short var_18 = (short)-11596;
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
