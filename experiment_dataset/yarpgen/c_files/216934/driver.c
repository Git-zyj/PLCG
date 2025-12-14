#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)223;
long long int var_4 = -6087579094923993164LL;
short var_7 = (short)15238;
unsigned long long int var_10 = 11389056430330776671ULL;
int zero = 0;
long long int var_17 = -5621525811293958309LL;
signed char var_18 = (signed char)-96;
long long int var_19 = -2018041697857316340LL;
unsigned long long int var_20 = 2936435678582889123ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
