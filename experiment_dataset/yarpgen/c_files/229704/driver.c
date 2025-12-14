#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -37965921;
unsigned char var_3 = (unsigned char)204;
int var_9 = 1066571526;
long long int var_10 = -2665866596613865187LL;
int zero = 0;
long long int var_13 = -3075367834437965176LL;
signed char var_14 = (signed char)53;
int var_15 = -391505364;
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
