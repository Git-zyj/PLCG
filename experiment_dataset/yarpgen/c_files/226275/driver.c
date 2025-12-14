#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-39;
int var_6 = -971170324;
long long int var_9 = -7434895869241118043LL;
signed char var_12 = (signed char)123;
int zero = 0;
int var_15 = 1978240336;
long long int var_16 = -1474751879005499993LL;
void init() {
}

void checksum() {
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
