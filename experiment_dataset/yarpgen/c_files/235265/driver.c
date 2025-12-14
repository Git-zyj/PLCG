#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1641870001;
long long int var_4 = 8128408722225911035LL;
unsigned int var_6 = 3684443725U;
short var_14 = (short)1234;
int zero = 0;
unsigned long long int var_16 = 11515214472572462837ULL;
signed char var_17 = (signed char)32;
unsigned char var_18 = (unsigned char)222;
int var_19 = 426820750;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
