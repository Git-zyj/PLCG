#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)55;
long long int var_5 = -3524862855929127434LL;
unsigned int var_9 = 2391250587U;
unsigned int var_12 = 3224679987U;
int zero = 0;
long long int var_14 = -6173242776679261768LL;
unsigned char var_15 = (unsigned char)30;
long long int var_16 = -8828584676933545750LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
