#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5689413563140049496LL;
unsigned int var_5 = 3260988937U;
int zero = 0;
unsigned long long int var_20 = 8243614148250696662ULL;
unsigned int var_21 = 1443965660U;
unsigned int var_22 = 1803152526U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
