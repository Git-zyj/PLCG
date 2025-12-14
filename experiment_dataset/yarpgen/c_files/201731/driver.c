#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)6434;
short var_11 = (short)29431;
short var_15 = (short)10702;
int zero = 0;
short var_16 = (short)-8779;
unsigned int var_17 = 217007235U;
signed char var_18 = (signed char)82;
unsigned int var_19 = 394568370U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
