#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2955553990U;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)27846;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)25;
short var_17 = (short)-12654;
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
