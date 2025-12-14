#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 569403658;
unsigned long long int var_2 = 2678733536768629936ULL;
unsigned long long int var_3 = 16437226502169510867ULL;
unsigned int var_4 = 3253899292U;
unsigned long long int var_8 = 11471523782175985188ULL;
long long int var_10 = -7737799143703930057LL;
unsigned int var_11 = 4214005451U;
long long int var_12 = 2536650222679581115LL;
unsigned char var_14 = (unsigned char)223;
short var_17 = (short)-30747;
int zero = 0;
unsigned char var_20 = (unsigned char)139;
unsigned char var_21 = (unsigned char)51;
unsigned long long int var_22 = 6113795923935574241ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
