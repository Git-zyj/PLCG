#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 685299790U;
signed char var_3 = (signed char)9;
long long int var_6 = -1171777971492272245LL;
signed char var_10 = (signed char)60;
unsigned char var_12 = (unsigned char)84;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_17 = (short)-14243;
unsigned char var_18 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
