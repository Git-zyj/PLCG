#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8238470885005864279ULL;
signed char var_3 = (signed char)-29;
unsigned int var_6 = 2892131664U;
int zero = 0;
unsigned char var_12 = (unsigned char)48;
long long int var_13 = -2628107489336864285LL;
unsigned char var_14 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
