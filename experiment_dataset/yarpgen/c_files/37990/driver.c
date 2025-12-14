#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-22585;
unsigned int var_17 = 2496241536U;
short var_18 = (short)-4679;
int zero = 0;
unsigned int var_20 = 2183338339U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)124;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
