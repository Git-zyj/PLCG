#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 447485374U;
short var_4 = (short)-2720;
_Bool var_9 = (_Bool)1;
short var_14 = (short)-31612;
int zero = 0;
short var_15 = (short)12326;
short var_16 = (short)-19187;
signed char var_17 = (signed char)120;
unsigned char var_18 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
