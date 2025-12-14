#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
short var_1 = (short)-20701;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 2850060510U;
short var_7 = (short)21850;
unsigned short var_9 = (unsigned short)20113;
signed char var_11 = (signed char)41;
int var_14 = 1075514671;
int var_15 = -1705122080;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2607855735U;
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
