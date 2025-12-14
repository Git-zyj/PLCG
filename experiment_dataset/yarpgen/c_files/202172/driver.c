#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)15;
unsigned long long int var_15 = 17045994057846966026ULL;
int zero = 0;
short var_18 = (short)-30461;
unsigned int var_19 = 294690030U;
unsigned long long int var_20 = 9750454765633249212ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
