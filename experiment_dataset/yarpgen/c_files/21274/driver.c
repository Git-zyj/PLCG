#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 9028016116364772401ULL;
signed char var_8 = (signed char)30;
int zero = 0;
unsigned long long int var_13 = 17052015786519368886ULL;
unsigned long long int var_14 = 15728435876683539224ULL;
unsigned short var_15 = (unsigned short)19509;
unsigned int var_16 = 3568708310U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
