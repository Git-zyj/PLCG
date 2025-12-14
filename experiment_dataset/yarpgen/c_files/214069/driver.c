#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2619024624U;
int var_6 = -1470891403;
unsigned short var_7 = (unsigned short)4666;
long long int var_8 = 5651782302324712343LL;
signed char var_9 = (signed char)41;
unsigned int var_12 = 1019968446U;
int zero = 0;
signed char var_13 = (signed char)30;
unsigned long long int var_14 = 4512791805330849185ULL;
unsigned long long int var_15 = 2263150295101501584ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
