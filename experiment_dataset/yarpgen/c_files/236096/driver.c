#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1665370991;
int var_4 = 1828057200;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)92;
signed char var_8 = (signed char)-22;
signed char var_12 = (signed char)-118;
unsigned long long int var_14 = 2194424856144001926ULL;
signed char var_15 = (signed char)53;
long long int var_16 = 5801980134597579586LL;
int zero = 0;
unsigned char var_20 = (unsigned char)241;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
