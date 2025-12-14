#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3639956996U;
unsigned char var_7 = (unsigned char)25;
int var_12 = 1879797712;
int var_14 = -766857534;
signed char var_17 = (signed char)-21;
int zero = 0;
long long int var_19 = -826792228788215381LL;
signed char var_20 = (signed char)-77;
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
