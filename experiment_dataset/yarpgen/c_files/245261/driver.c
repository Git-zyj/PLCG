#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)(-127 - 1);
long long int var_13 = -8996992317539857974LL;
signed char var_15 = (signed char)-106;
int zero = 0;
unsigned long long int var_16 = 2882689719929652095ULL;
unsigned long long int var_17 = 430105069552771218ULL;
void init() {
}

void checksum() {
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
