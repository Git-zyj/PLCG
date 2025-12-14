#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1422326249343755746LL;
int var_9 = -1335567272;
long long int var_12 = -3538860806975378512LL;
int zero = 0;
long long int var_13 = -4024819581321953543LL;
int var_14 = 1560005625;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
