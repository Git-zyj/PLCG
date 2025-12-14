#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 2001944651698475241ULL;
signed char var_9 = (signed char)33;
long long int var_14 = -2854095762153403418LL;
int zero = 0;
unsigned long long int var_15 = 16170036366542072546ULL;
long long int var_16 = 6526870749019383194LL;
short var_17 = (short)22798;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
