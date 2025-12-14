#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
signed char var_8 = (signed char)21;
unsigned long long int var_12 = 8983195651092045748ULL;
int var_14 = 639479504;
int zero = 0;
unsigned char var_20 = (unsigned char)27;
long long int var_21 = 2191861910172336268LL;
unsigned int var_22 = 4125973618U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
