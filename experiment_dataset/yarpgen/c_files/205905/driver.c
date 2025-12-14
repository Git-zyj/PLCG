#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
unsigned char var_4 = (unsigned char)79;
long long int var_5 = 3907283153146918270LL;
unsigned char var_8 = (unsigned char)116;
long long int var_9 = -3278870469288115987LL;
int var_10 = 388918318;
unsigned int var_11 = 2194967725U;
int zero = 0;
unsigned int var_13 = 3673052446U;
unsigned int var_14 = 1042098650U;
unsigned long long int var_15 = 1816887383142564505ULL;
unsigned long long int var_16 = 7199692821010801926ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
