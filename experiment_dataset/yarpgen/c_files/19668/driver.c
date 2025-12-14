#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-14;
unsigned int var_10 = 3420473919U;
short var_13 = (short)15842;
long long int var_15 = -5594532941315443948LL;
unsigned int var_17 = 1674426579U;
int zero = 0;
int var_18 = 2098163409;
signed char var_19 = (signed char)8;
void init() {
}

void checksum() {
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
