#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 338154950;
signed char var_2 = (signed char)-32;
unsigned char var_3 = (unsigned char)13;
unsigned int var_5 = 3029714469U;
long long int var_6 = -7762829487923016541LL;
unsigned short var_11 = (unsigned short)32210;
int var_16 = -1274593875;
int var_17 = -760740288;
int zero = 0;
long long int var_19 = 4589582067938974882LL;
unsigned int var_20 = 4123369939U;
unsigned int var_21 = 1586628422U;
void init() {
}

void checksum() {
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
