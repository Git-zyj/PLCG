#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 11074840170249735693ULL;
int var_6 = -2083812812;
_Bool var_7 = (_Bool)0;
signed char var_11 = (signed char)81;
long long int var_13 = 3493443364386320089LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 15826652053560372220ULL;
signed char var_16 = (signed char)81;
void init() {
}

void checksum() {
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
