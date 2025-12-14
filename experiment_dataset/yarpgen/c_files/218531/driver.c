#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5747272299895308132LL;
signed char var_9 = (signed char)13;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-51;
long long int var_20 = 1927052761025728730LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
