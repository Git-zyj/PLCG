#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10774370734506861593ULL;
unsigned int var_6 = 1331567726U;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 16603861229205122581ULL;
signed char var_13 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
