#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3254894812993382800LL;
int var_10 = -2130639889;
int var_14 = -1072093114;
int zero = 0;
unsigned char var_18 = (unsigned char)10;
unsigned long long int var_19 = 14648218002004985171ULL;
unsigned long long int var_20 = 73897741074305551ULL;
short var_21 = (short)29750;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
