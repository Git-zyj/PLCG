#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2589255382U;
unsigned int var_13 = 4232169161U;
unsigned int var_15 = 2497862385U;
int zero = 0;
unsigned long long int var_19 = 11897956840361129293ULL;
signed char var_20 = (signed char)-16;
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
