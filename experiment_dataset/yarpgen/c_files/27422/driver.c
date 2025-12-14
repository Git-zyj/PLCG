#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)122;
unsigned long long int var_4 = 1027472464993900467ULL;
unsigned int var_6 = 2020364681U;
unsigned int var_8 = 767039115U;
unsigned long long int var_9 = 2520697477797242328ULL;
short var_11 = (short)7920;
short var_12 = (short)-6882;
unsigned short var_15 = (unsigned short)32033;
int zero = 0;
unsigned int var_16 = 2570806276U;
short var_17 = (short)17732;
unsigned long long int var_18 = 10522879331085015903ULL;
int var_19 = 572520483;
unsigned int var_20 = 709012054U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
