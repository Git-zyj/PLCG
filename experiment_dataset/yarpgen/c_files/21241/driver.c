#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10621;
unsigned int var_5 = 3157973099U;
signed char var_9 = (signed char)87;
int var_12 = -1156311765;
int zero = 0;
int var_15 = -951319894;
unsigned char var_16 = (unsigned char)233;
void init() {
}

void checksum() {
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
