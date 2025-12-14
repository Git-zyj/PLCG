#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)17;
long long int var_14 = 9009575818541879597LL;
int zero = 0;
unsigned long long int var_16 = 284159760435400493ULL;
unsigned long long int var_17 = 996648083827985326ULL;
long long int var_18 = -5076242365661933185LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
