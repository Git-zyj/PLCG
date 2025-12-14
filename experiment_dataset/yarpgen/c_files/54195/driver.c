#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47770;
unsigned short var_6 = (unsigned short)61450;
signed char var_7 = (signed char)61;
int var_10 = 348491471;
unsigned short var_11 = (unsigned short)34129;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = 5701091193999944554LL;
signed char var_16 = (signed char)-63;
long long int var_17 = 799390308919263368LL;
void init() {
}

void checksum() {
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
