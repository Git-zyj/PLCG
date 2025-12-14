#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5185791045914138574ULL;
short var_5 = (short)21088;
short var_7 = (short)346;
unsigned long long int var_9 = 13444292879199532038ULL;
unsigned char var_12 = (unsigned char)242;
int zero = 0;
int var_16 = -1063798891;
signed char var_17 = (signed char)-23;
unsigned long long int var_18 = 3469210059664780228ULL;
void init() {
}

void checksum() {
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
