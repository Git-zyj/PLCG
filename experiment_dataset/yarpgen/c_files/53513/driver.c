#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3162918321U;
signed char var_3 = (signed char)-1;
long long int var_7 = 7494228108766879685LL;
unsigned int var_16 = 1214693633U;
int zero = 0;
unsigned short var_18 = (unsigned short)46456;
signed char var_19 = (signed char)-73;
void init() {
}

void checksum() {
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
