#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1134099038;
long long int var_1 = 893562184732344237LL;
unsigned long long int var_7 = 12448355407318467262ULL;
short var_9 = (short)-12678;
int zero = 0;
long long int var_12 = 313513487300557709LL;
unsigned long long int var_13 = 3063918922487711863ULL;
void init() {
}

void checksum() {
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
