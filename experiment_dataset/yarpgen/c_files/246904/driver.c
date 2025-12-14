#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2450043181283672068ULL;
short var_3 = (short)-22235;
unsigned long long int var_5 = 3168678473344625582ULL;
int var_6 = 1381240963;
signed char var_13 = (signed char)-80;
int zero = 0;
unsigned short var_15 = (unsigned short)28129;
long long int var_16 = -1102131808552555189LL;
long long int var_17 = 6030873237936607752LL;
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
