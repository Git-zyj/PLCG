#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 959079672U;
signed char var_2 = (signed char)-46;
short var_5 = (short)9145;
short var_7 = (short)-22216;
short var_8 = (short)28778;
signed char var_16 = (signed char)55;
int var_17 = -1008837952;
int zero = 0;
int var_18 = -947017433;
signed char var_19 = (signed char)-92;
short var_20 = (short)27065;
long long int var_21 = 5166899506138171841LL;
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
