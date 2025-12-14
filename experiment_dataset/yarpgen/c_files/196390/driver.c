#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3523484979U;
unsigned int var_1 = 3365331919U;
unsigned int var_2 = 2296565590U;
int zero = 0;
unsigned long long int var_15 = 12212600037751406946ULL;
unsigned long long int var_16 = 13128288699493387171ULL;
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
