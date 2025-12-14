#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5464876595287997579LL;
short var_5 = (short)14179;
short var_6 = (short)-25422;
short var_7 = (short)-7601;
signed char var_11 = (signed char)-125;
short var_13 = (short)10716;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 472126041U;
unsigned short var_16 = (unsigned short)56686;
int zero = 0;
long long int var_18 = -7355496213037152651LL;
long long int var_19 = -1266196214253176169LL;
void init() {
}

void checksum() {
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
