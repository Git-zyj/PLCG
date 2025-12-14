#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_5 = 3026406339U;
signed char var_7 = (signed char)-65;
short var_8 = (short)-1211;
unsigned int var_9 = 2188379330U;
int zero = 0;
signed char var_10 = (signed char)-88;
long long int var_11 = -5775541495392026526LL;
long long int var_12 = -7692736290542838204LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
