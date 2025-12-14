#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)87;
unsigned long long int var_5 = 15180027407318613260ULL;
unsigned long long int var_6 = 2196969240878228778ULL;
short var_7 = (short)-29270;
int var_10 = 556090041;
signed char var_11 = (signed char)27;
unsigned long long int var_13 = 4897711920575846149ULL;
int zero = 0;
int var_15 = 1934267097;
unsigned long long int var_16 = 1888446671082592561ULL;
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
