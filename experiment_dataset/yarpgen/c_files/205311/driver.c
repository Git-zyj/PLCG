#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3577697302697869031LL;
signed char var_7 = (signed char)67;
int zero = 0;
unsigned int var_16 = 2360148641U;
long long int var_17 = 8661932061802118747LL;
signed char var_18 = (signed char)-45;
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
