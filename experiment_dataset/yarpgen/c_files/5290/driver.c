#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_7 = -678843790;
long long int var_12 = 8169015632524723692LL;
long long int var_15 = 524780453463017469LL;
unsigned int var_17 = 3232309086U;
int zero = 0;
unsigned short var_19 = (unsigned short)8598;
signed char var_20 = (signed char)116;
void init() {
}

void checksum() {
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
