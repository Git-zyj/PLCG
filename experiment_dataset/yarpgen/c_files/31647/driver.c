#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
signed char var_1 = (signed char)-41;
long long int var_5 = 2760140816239259943LL;
long long int var_15 = -4853101146429110351LL;
int zero = 0;
unsigned long long int var_16 = 14147762508621685921ULL;
signed char var_17 = (signed char)87;
void init() {
}

void checksum() {
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
