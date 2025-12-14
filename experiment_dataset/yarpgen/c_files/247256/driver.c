#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8477;
short var_10 = (short)16726;
signed char var_13 = (signed char)55;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 7565475470475966619ULL;
short var_17 = (short)4301;
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
