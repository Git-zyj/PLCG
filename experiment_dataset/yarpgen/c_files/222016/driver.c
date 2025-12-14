#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
short var_4 = (short)-16445;
unsigned int var_5 = 2830272105U;
unsigned short var_6 = (unsigned short)40762;
unsigned int var_8 = 3530026683U;
long long int var_9 = -1157446864372292996LL;
int zero = 0;
long long int var_12 = 5497416039267388514LL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)26142;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
