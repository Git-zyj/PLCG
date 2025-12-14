#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_5 = 594046873;
signed char var_8 = (signed char)52;
long long int var_9 = 4228719850669335003LL;
signed char var_10 = (signed char)-122;
unsigned char var_12 = (unsigned char)134;
short var_13 = (short)25753;
long long int var_14 = 2005970334792621424LL;
short var_15 = (short)-637;
unsigned short var_16 = (unsigned short)36833;
int zero = 0;
unsigned short var_17 = (unsigned short)51279;
long long int var_18 = -4518377448354731803LL;
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
