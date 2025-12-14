#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-62;
signed char var_6 = (signed char)77;
unsigned int var_9 = 442600696U;
int zero = 0;
signed char var_12 = (signed char)29;
unsigned int var_13 = 3596924384U;
unsigned long long int var_14 = 2490645162342307507ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
