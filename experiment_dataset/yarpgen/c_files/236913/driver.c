#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)2579;
_Bool var_7 = (_Bool)0;
int var_9 = -208547615;
int zero = 0;
signed char var_14 = (signed char)61;
unsigned long long int var_15 = 3153775961616867816ULL;
int var_16 = 1419476659;
int var_17 = 212179014;
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
