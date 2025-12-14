#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 811851018366955442LL;
unsigned int var_7 = 4132143885U;
signed char var_8 = (signed char)-30;
unsigned long long int var_10 = 12144225295265373870ULL;
signed char var_11 = (signed char)65;
int zero = 0;
unsigned long long int var_12 = 960961624290955488ULL;
unsigned int var_13 = 2378885U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
