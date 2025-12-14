#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12688052513881190639ULL;
unsigned int var_12 = 2883459416U;
unsigned int var_16 = 3561646511U;
int zero = 0;
long long int var_20 = 791702236841917501LL;
unsigned int var_21 = 3807126757U;
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
