#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4502941740789150637ULL;
unsigned int var_7 = 358301632U;
unsigned long long int var_9 = 938736806466209280ULL;
short var_12 = (short)-16151;
int zero = 0;
unsigned int var_14 = 1763929005U;
unsigned int var_15 = 2182089635U;
unsigned long long int var_16 = 1070362406651134157ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
