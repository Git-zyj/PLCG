#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3991094478081373572LL;
long long int var_14 = -7451818271680565831LL;
long long int var_15 = 5354771363962477704LL;
int zero = 0;
long long int var_20 = 150274416485082902LL;
long long int var_21 = -7068611295734659487LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
