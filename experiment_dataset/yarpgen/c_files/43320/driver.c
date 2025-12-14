#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
unsigned short var_3 = (unsigned short)45318;
unsigned int var_4 = 3943854580U;
int var_5 = -499045282;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)7619;
unsigned char var_9 = (unsigned char)160;
short var_10 = (short)15721;
unsigned int var_11 = 2920399253U;
unsigned short var_13 = (unsigned short)7979;
int zero = 0;
unsigned int var_14 = 2010896738U;
signed char var_15 = (signed char)-113;
int var_16 = -1485496503;
signed char var_17 = (signed char)7;
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
