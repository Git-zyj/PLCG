#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1398049816;
unsigned int var_12 = 1031043993U;
int var_16 = -1674783373;
int zero = 0;
unsigned int var_18 = 2587177037U;
int var_19 = 1944445049;
signed char var_20 = (signed char)-68;
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
