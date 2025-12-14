#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16585942617848398910ULL;
unsigned long long int var_6 = 18230615603078478315ULL;
unsigned short var_15 = (unsigned short)42126;
signed char var_16 = (signed char)49;
int zero = 0;
unsigned char var_19 = (unsigned char)127;
unsigned long long int var_20 = 15964642799449758904ULL;
unsigned long long int var_21 = 2651209587633049647ULL;
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
