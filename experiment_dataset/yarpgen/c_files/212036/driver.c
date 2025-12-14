#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4529111547065292394LL;
short var_2 = (short)28471;
unsigned int var_11 = 351435833U;
unsigned int var_12 = 2732909514U;
int zero = 0;
unsigned long long int var_16 = 9815433870417287809ULL;
int var_17 = 1995911813;
long long int var_18 = -9179690575205992853LL;
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
