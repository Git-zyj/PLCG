#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2905204911841256541LL;
short var_6 = (short)-31269;
unsigned int var_8 = 1412478742U;
short var_9 = (short)-7998;
short var_13 = (short)30695;
long long int var_17 = -7636201044376773527LL;
int zero = 0;
unsigned int var_18 = 1125002395U;
unsigned int var_19 = 2915414745U;
short var_20 = (short)-22244;
void init() {
}

void checksum() {
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
