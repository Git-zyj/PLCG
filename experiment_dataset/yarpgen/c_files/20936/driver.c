#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10668503590957179402ULL;
long long int var_2 = -7794409995080817370LL;
unsigned short var_3 = (unsigned short)45375;
unsigned long long int var_4 = 15648666811815104412ULL;
unsigned short var_5 = (unsigned short)36726;
short var_9 = (short)-21965;
int zero = 0;
unsigned int var_14 = 698603747U;
unsigned long long int var_15 = 4959937139554429593ULL;
unsigned long long int var_16 = 4928580610174939023ULL;
unsigned short var_17 = (unsigned short)15835;
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
