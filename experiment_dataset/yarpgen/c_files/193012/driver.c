#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)93;
int var_2 = 1382926964;
int var_4 = -1781050186;
short var_6 = (short)28740;
unsigned long long int var_7 = 964122173752010224ULL;
short var_10 = (short)-23802;
int zero = 0;
unsigned char var_11 = (unsigned char)13;
signed char var_12 = (signed char)29;
int var_13 = -875137342;
short var_14 = (short)-7163;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
