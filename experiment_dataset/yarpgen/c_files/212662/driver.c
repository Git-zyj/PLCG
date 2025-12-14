#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16865005920936494336ULL;
long long int var_10 = 216376632514274497LL;
int zero = 0;
short var_16 = (short)14885;
unsigned short var_17 = (unsigned short)64654;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 5726105273849110067ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
