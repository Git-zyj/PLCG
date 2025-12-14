#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5909;
long long int var_12 = 8205573298230590033LL;
unsigned short var_17 = (unsigned short)14813;
int zero = 0;
unsigned char var_18 = (unsigned char)37;
long long int var_19 = 2997448637975304161LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
