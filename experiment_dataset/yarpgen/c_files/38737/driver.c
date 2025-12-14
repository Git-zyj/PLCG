#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 246128072;
long long int var_2 = -6764296277819328053LL;
unsigned int var_5 = 1009268224U;
_Bool var_6 = (_Bool)1;
int var_7 = -1636077800;
long long int var_10 = 1473886418150985726LL;
unsigned long long int var_12 = 15311821080603418413ULL;
unsigned int var_13 = 2649010659U;
int zero = 0;
unsigned int var_14 = 991531818U;
unsigned int var_15 = 4242741245U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
