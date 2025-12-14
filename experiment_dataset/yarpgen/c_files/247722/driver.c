#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48837;
signed char var_2 = (signed char)109;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
long long int var_8 = -4971430560325973699LL;
long long int var_14 = -4219590035442733686LL;
int zero = 0;
unsigned short var_18 = (unsigned short)63374;
short var_19 = (short)-29406;
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
