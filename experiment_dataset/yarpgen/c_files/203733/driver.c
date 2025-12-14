#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)32592;
short var_11 = (short)25821;
int zero = 0;
long long int var_12 = -5951188887127478493LL;
long long int var_13 = -6098979678929122327LL;
signed char var_14 = (signed char)-125;
unsigned char var_15 = (unsigned char)119;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
