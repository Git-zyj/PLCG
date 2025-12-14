#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-116;
signed char var_7 = (signed char)59;
int zero = 0;
long long int var_15 = -2036037356699421207LL;
unsigned int var_16 = 553604720U;
signed char var_17 = (signed char)-105;
long long int var_18 = 3899845406303811884LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
