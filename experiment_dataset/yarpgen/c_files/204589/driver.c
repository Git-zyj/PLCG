#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4387;
unsigned int var_5 = 1136653847U;
unsigned long long int var_13 = 10428794509214792089ULL;
unsigned long long int var_16 = 4948344792180308810ULL;
int zero = 0;
short var_19 = (short)-12091;
short var_20 = (short)9029;
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
