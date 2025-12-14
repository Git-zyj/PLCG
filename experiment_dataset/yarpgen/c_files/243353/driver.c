#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5053;
long long int var_3 = 697266142507627132LL;
unsigned long long int var_5 = 17338043950077376854ULL;
signed char var_6 = (signed char)96;
signed char var_9 = (signed char)125;
signed char var_12 = (signed char)2;
unsigned char var_13 = (unsigned char)252;
int zero = 0;
int var_15 = 2120296358;
unsigned long long int var_16 = 3681611049536134167ULL;
unsigned long long int var_17 = 5154818378736849952ULL;
unsigned int var_18 = 1057723095U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
