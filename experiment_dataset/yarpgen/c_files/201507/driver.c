#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3223;
long long int var_3 = -1883824000910244846LL;
long long int var_4 = 6127151256753886531LL;
int var_6 = -696919526;
_Bool var_12 = (_Bool)1;
unsigned int var_17 = 3044696714U;
int zero = 0;
signed char var_18 = (signed char)2;
unsigned long long int var_19 = 4862278253664571054ULL;
long long int var_20 = -210727416807847622LL;
short var_21 = (short)-5966;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
