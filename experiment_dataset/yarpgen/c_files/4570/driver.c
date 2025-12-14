#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 5066682540971072917LL;
unsigned int var_11 = 2280478869U;
int zero = 0;
unsigned long long int var_17 = 719230867487254993ULL;
long long int var_18 = 1157352731134760646LL;
unsigned int var_19 = 4031938684U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
