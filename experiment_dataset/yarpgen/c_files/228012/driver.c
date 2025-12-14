#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10878;
short var_6 = (short)23103;
_Bool var_10 = (_Bool)0;
int var_12 = -973152382;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)96;
unsigned char var_15 = (unsigned char)59;
short var_16 = (short)-16808;
int var_17 = 1560153124;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
