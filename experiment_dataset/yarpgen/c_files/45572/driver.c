#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2932869774805300514LL;
signed char var_13 = (signed char)-79;
signed char var_15 = (signed char)-65;
int zero = 0;
unsigned int var_16 = 3566484212U;
unsigned int var_17 = 3552461326U;
unsigned int var_18 = 979770310U;
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
