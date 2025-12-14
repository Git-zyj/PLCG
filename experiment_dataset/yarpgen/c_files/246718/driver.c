#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 661556182;
unsigned int var_5 = 2986840283U;
signed char var_7 = (signed char)118;
unsigned int var_8 = 2997696344U;
int zero = 0;
long long int var_11 = -4491572764707502366LL;
signed char var_12 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
