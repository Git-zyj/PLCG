#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1021978606U;
unsigned int var_3 = 3746972899U;
signed char var_9 = (signed char)-38;
unsigned int var_15 = 2716448406U;
int zero = 0;
signed char var_20 = (signed char)-33;
long long int var_21 = -2011356792656673328LL;
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
