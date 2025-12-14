#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 213122332;
signed char var_2 = (signed char)43;
unsigned int var_11 = 4024005229U;
int zero = 0;
unsigned short var_12 = (unsigned short)40882;
unsigned int var_13 = 751808576U;
unsigned int var_14 = 386875066U;
unsigned char var_15 = (unsigned char)87;
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
