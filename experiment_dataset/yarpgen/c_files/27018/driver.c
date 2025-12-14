#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-82;
long long int var_5 = -6446409284722407981LL;
long long int var_17 = -6961116755614372571LL;
int zero = 0;
long long int var_19 = 1392190483215096466LL;
short var_20 = (short)-5874;
long long int var_21 = -3934581433373160431LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
