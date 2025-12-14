#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1312204546597026962ULL;
int var_5 = 1914088928;
unsigned long long int var_7 = 41025016273846738ULL;
long long int var_9 = -1399774409019797209LL;
signed char var_12 = (signed char)-99;
int zero = 0;
signed char var_13 = (signed char)(-127 - 1);
long long int var_14 = -6048595402584135470LL;
signed char var_15 = (signed char)106;
unsigned short var_16 = (unsigned short)49421;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
