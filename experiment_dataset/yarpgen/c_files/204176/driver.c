#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
unsigned int var_2 = 154338876U;
unsigned char var_3 = (unsigned char)122;
unsigned char var_6 = (unsigned char)199;
unsigned int var_7 = 3025456252U;
unsigned long long int var_11 = 14387978514822296779ULL;
int zero = 0;
long long int var_12 = -4696345798204487330LL;
unsigned int var_13 = 3349935324U;
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
