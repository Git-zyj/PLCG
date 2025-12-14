#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19007;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)253;
unsigned long long int var_4 = 16508259563608555266ULL;
unsigned long long int var_5 = 1296747360200984962ULL;
unsigned long long int var_6 = 4205938710384992402ULL;
unsigned short var_9 = (unsigned short)20652;
int zero = 0;
unsigned int var_12 = 582085194U;
unsigned int var_13 = 3382646009U;
short var_14 = (short)-10595;
unsigned long long int var_15 = 16445768051559957814ULL;
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
