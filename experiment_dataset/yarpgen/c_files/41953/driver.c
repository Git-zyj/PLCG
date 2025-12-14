#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
long long int var_4 = -6814391446808461488LL;
unsigned char var_6 = (unsigned char)168;
int var_10 = 1963002406;
int zero = 0;
unsigned long long int var_11 = 14413299291042282860ULL;
long long int var_12 = 427683550163981510LL;
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
