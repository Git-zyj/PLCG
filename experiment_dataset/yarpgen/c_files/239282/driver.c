#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1807911883U;
unsigned short var_9 = (unsigned short)38925;
int var_10 = 4402166;
int zero = 0;
int var_14 = 1122787670;
signed char var_15 = (signed char)106;
unsigned int var_16 = 1866127269U;
void init() {
}

void checksum() {
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
