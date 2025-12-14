#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-91;
unsigned int var_12 = 1006054437U;
long long int var_16 = -3052156454703636317LL;
int zero = 0;
unsigned short var_19 = (unsigned short)47547;
signed char var_20 = (signed char)-9;
void init() {
}

void checksum() {
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
