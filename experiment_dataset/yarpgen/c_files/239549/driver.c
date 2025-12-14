#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1511952317935024638ULL;
unsigned short var_3 = (unsigned short)26761;
unsigned long long int var_5 = 5552275144098662552ULL;
signed char var_8 = (signed char)91;
signed char var_10 = (signed char)21;
unsigned long long int var_11 = 1364402900226171247ULL;
int zero = 0;
short var_13 = (short)21763;
unsigned int var_14 = 146076172U;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 3704616167781150921ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
