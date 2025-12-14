#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6171574890192632917LL;
int var_12 = -881041820;
long long int var_13 = -2310501460919371428LL;
int zero = 0;
signed char var_15 = (signed char)-27;
long long int var_16 = 2968847319795951113LL;
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
