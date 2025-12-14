#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3771134051U;
unsigned int var_6 = 366392282U;
long long int var_12 = 643418402260930004LL;
long long int var_13 = 2009903276938472204LL;
int zero = 0;
signed char var_16 = (signed char)68;
int var_17 = -1898149130;
void init() {
}

void checksum() {
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
