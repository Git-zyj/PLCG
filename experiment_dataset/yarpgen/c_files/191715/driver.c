#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8306710324671068095LL;
unsigned long long int var_8 = 15273246320892071751ULL;
unsigned int var_14 = 1030960215U;
int zero = 0;
unsigned int var_17 = 3714573853U;
int var_18 = 1315441312;
unsigned char var_19 = (unsigned char)41;
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
