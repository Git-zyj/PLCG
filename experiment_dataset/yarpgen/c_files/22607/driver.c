#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)8842;
signed char var_5 = (signed char)-28;
int var_7 = -165348711;
short var_10 = (short)31018;
int zero = 0;
short var_12 = (short)-22729;
int var_13 = -157643934;
signed char var_14 = (signed char)15;
unsigned long long int var_15 = 6584746482723574897ULL;
signed char var_16 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
