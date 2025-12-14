#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-83;
int var_1 = 2132193098;
int var_4 = -1564520209;
int zero = 0;
int var_10 = -1496451574;
int var_11 = -839368536;
unsigned long long int var_12 = 13563593548064538075ULL;
short var_13 = (short)6159;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
