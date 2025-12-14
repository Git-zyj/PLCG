#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)111;
unsigned int var_4 = 2430101839U;
unsigned int var_6 = 1345040531U;
unsigned int var_10 = 1057054893U;
int zero = 0;
unsigned int var_12 = 2704655036U;
signed char var_13 = (signed char)-22;
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
