#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
signed char var_9 = (signed char)-16;
unsigned long long int var_10 = 12886351691537401458ULL;
long long int var_12 = -4740752074452596428LL;
long long int var_13 = -2693898877272331873LL;
int zero = 0;
signed char var_17 = (signed char)81;
signed char var_18 = (signed char)(-127 - 1);
signed char var_19 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
