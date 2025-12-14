#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 685045566468775936ULL;
unsigned long long int var_6 = 13745549456610634995ULL;
unsigned char var_10 = (unsigned char)245;
int zero = 0;
unsigned long long int var_16 = 14828650819802239537ULL;
unsigned int var_17 = 2773239868U;
unsigned int var_18 = 2765199718U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
