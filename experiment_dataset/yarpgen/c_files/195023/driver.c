#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1765008572U;
signed char var_2 = (signed char)6;
unsigned int var_7 = 2004656475U;
unsigned char var_8 = (unsigned char)45;
signed char var_10 = (signed char)71;
unsigned char var_11 = (unsigned char)49;
unsigned int var_13 = 3434605917U;
int zero = 0;
long long int var_15 = 6780669503492371774LL;
unsigned long long int var_16 = 15535031295199476433ULL;
void init() {
}

void checksum() {
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
