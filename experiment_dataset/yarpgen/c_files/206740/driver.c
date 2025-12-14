#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)29728;
int var_7 = 764160735;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 18272965761408220249ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)56691;
signed char var_11 = (signed char)4;
unsigned long long int var_12 = 2595502851161086665ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
