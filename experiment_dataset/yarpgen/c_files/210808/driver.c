#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 719940141;
signed char var_3 = (signed char)74;
unsigned short var_7 = (unsigned short)54901;
unsigned int var_9 = 3148369864U;
signed char var_10 = (signed char)-80;
int zero = 0;
long long int var_13 = 1298471546558492261LL;
long long int var_14 = -2464647725476286867LL;
void init() {
}

void checksum() {
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
