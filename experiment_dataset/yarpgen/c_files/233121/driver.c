#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-93;
unsigned int var_5 = 1581361758U;
int var_8 = -667148933;
unsigned short var_9 = (unsigned short)39701;
long long int var_12 = -7552235401524783534LL;
int zero = 0;
unsigned long long int var_13 = 18337883434925788971ULL;
unsigned int var_14 = 1740030025U;
void init() {
}

void checksum() {
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
