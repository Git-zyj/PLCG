#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19929;
unsigned short var_1 = (unsigned short)21309;
long long int var_5 = 6894758906090138900LL;
unsigned long long int var_7 = 12170749539735237485ULL;
unsigned int var_8 = 2046491124U;
unsigned long long int var_9 = 8292481937820950281ULL;
signed char var_15 = (signed char)5;
int var_16 = 1677077379;
int var_19 = -2032693025;
int zero = 0;
signed char var_20 = (signed char)-49;
long long int var_21 = 3305855896906473418LL;
long long int var_22 = 7741244368232477817LL;
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
