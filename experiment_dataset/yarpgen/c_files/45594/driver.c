#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29376;
unsigned short var_6 = (unsigned short)27948;
unsigned int var_7 = 922427768U;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-30931;
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
