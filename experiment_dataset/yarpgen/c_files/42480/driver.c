#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)239;
unsigned long long int var_5 = 2073748407792518193ULL;
unsigned long long int var_8 = 7840524227100226370ULL;
signed char var_9 = (signed char)-22;
short var_12 = (short)-6420;
int zero = 0;
unsigned long long int var_14 = 7904579502776659092ULL;
long long int var_15 = 3794290007017707LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
