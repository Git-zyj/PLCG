#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4505709612696902770ULL;
unsigned int var_7 = 122052523U;
unsigned short var_9 = (unsigned short)15653;
int var_12 = 293663599;
int zero = 0;
unsigned short var_16 = (unsigned short)3236;
unsigned int var_17 = 2409356193U;
unsigned int var_18 = 2004710671U;
unsigned char var_19 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
