#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-51;
unsigned long long int var_1 = 9892951938537761870ULL;
int var_2 = 1467030631;
unsigned long long int var_7 = 12158222925534448341ULL;
unsigned short var_9 = (unsigned short)46619;
int zero = 0;
unsigned long long int var_20 = 2291152165676916360ULL;
unsigned long long int var_21 = 4669702881668793813ULL;
int var_22 = -315190161;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
