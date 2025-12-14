#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1914660609;
signed char var_2 = (signed char)80;
signed char var_3 = (signed char)109;
signed char var_5 = (signed char)-1;
int var_7 = 1565114958;
unsigned long long int var_8 = 2734768130741966036ULL;
int zero = 0;
int var_11 = -831653847;
signed char var_12 = (signed char)-96;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
