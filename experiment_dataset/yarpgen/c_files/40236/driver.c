#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11653;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-16328;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3571412580U;
unsigned int var_16 = 3220289287U;
unsigned int var_17 = 2798998770U;
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
