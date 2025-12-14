#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4105018800330511950LL;
unsigned int var_4 = 4149514296U;
unsigned int var_11 = 1124907240U;
int zero = 0;
unsigned int var_15 = 2995840991U;
unsigned int var_16 = 2250131329U;
int var_17 = -1330701305;
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
