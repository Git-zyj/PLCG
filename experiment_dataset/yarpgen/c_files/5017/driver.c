#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8134316037980855581LL;
unsigned int var_1 = 896197903U;
unsigned char var_4 = (unsigned char)162;
unsigned int var_5 = 29780129U;
unsigned long long int var_11 = 2496955316677379274ULL;
int zero = 0;
int var_18 = -1186930477;
unsigned char var_19 = (unsigned char)75;
signed char var_20 = (signed char)-20;
void init() {
}

void checksum() {
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
