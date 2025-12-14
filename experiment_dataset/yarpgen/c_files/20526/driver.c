#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8266946980363438356ULL;
unsigned char var_6 = (unsigned char)18;
long long int var_8 = -3232703158152202813LL;
unsigned short var_10 = (unsigned short)55562;
unsigned char var_12 = (unsigned char)120;
int zero = 0;
long long int var_18 = -4920653782603885231LL;
unsigned long long int var_19 = 14050271380088578009ULL;
signed char var_20 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
