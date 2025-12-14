#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32652;
unsigned int var_3 = 2861974620U;
unsigned long long int var_7 = 6488174156116965288ULL;
signed char var_8 = (signed char)-116;
int zero = 0;
int var_15 = -1840756879;
unsigned int var_16 = 212451475U;
unsigned int var_17 = 2023406165U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
