#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38802;
unsigned long long int var_5 = 5832471171883779818ULL;
unsigned short var_8 = (unsigned short)296;
short var_10 = (short)-13641;
unsigned int var_11 = 147750016U;
int var_12 = -220344568;
unsigned int var_14 = 1938216399U;
int zero = 0;
unsigned long long int var_17 = 1500062411971486211ULL;
signed char var_18 = (signed char)-73;
void init() {
}

void checksum() {
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
