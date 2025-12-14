#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1970886901;
unsigned long long int var_5 = 9340424132969491827ULL;
unsigned int var_12 = 2632277270U;
int zero = 0;
long long int var_17 = 4082429868556235257LL;
unsigned long long int var_18 = 14735875241528777745ULL;
int var_19 = 581705547;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
