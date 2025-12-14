#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26114;
int var_7 = -1005735339;
signed char var_8 = (signed char)67;
int var_10 = 692139951;
int zero = 0;
unsigned int var_11 = 228168335U;
long long int var_12 = -2928472782992711791LL;
unsigned long long int var_13 = 9010614863729693698ULL;
unsigned int var_14 = 930424U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
