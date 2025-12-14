#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1861004619;
signed char var_5 = (signed char)-63;
signed char var_11 = (signed char)20;
unsigned char var_14 = (unsigned char)87;
signed char var_16 = (signed char)-101;
int zero = 0;
unsigned int var_20 = 2576594062U;
long long int var_21 = -5011570724084341189LL;
signed char var_22 = (signed char)-92;
signed char var_23 = (signed char)-76;
unsigned char var_24 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
