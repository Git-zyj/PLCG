#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-2018;
unsigned long long int var_3 = 10945586172940372702ULL;
long long int var_4 = -8199375485239357728LL;
unsigned char var_7 = (unsigned char)161;
signed char var_10 = (signed char)-36;
int zero = 0;
unsigned long long int var_11 = 6816105525818212127ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
