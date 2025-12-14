#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 829040348U;
unsigned long long int var_5 = 7465647008481927906ULL;
unsigned int var_9 = 3707914277U;
unsigned long long int var_12 = 12435488313366329250ULL;
int zero = 0;
signed char var_13 = (signed char)-87;
unsigned short var_14 = (unsigned short)25097;
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
