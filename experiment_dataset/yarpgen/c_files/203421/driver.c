#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7986074015240240311ULL;
short var_7 = (short)-24846;
unsigned long long int var_8 = 14869257251837722287ULL;
long long int var_9 = -1141961381645235007LL;
int zero = 0;
long long int var_11 = -2574023870632784401LL;
short var_12 = (short)-20345;
int var_13 = -582573182;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
