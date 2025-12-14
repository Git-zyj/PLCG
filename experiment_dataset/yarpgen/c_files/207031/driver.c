#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-55;
int var_8 = -1539357023;
unsigned long long int var_10 = 8508255822151117897ULL;
long long int var_14 = 825160500912174597LL;
int zero = 0;
signed char var_15 = (signed char)-36;
signed char var_16 = (signed char)123;
short var_17 = (short)17473;
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
