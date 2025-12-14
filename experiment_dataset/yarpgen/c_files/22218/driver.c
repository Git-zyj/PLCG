#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17997;
signed char var_2 = (signed char)79;
long long int var_3 = 2177115965565372837LL;
short var_7 = (short)-23193;
long long int var_8 = 1282023218840290980LL;
unsigned int var_9 = 108207844U;
int zero = 0;
unsigned int var_10 = 1684339200U;
unsigned int var_11 = 97483543U;
unsigned char var_12 = (unsigned char)223;
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
