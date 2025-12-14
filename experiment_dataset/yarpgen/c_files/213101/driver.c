#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-12799;
int var_9 = 1835245582;
int zero = 0;
signed char var_10 = (signed char)-28;
long long int var_11 = -6464960576616069522LL;
unsigned int var_12 = 496638650U;
long long int var_13 = -3633876929274923195LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
