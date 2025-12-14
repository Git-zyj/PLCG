#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -4922614436693584456LL;
unsigned long long int var_10 = 9993218870347543202ULL;
unsigned char var_11 = (unsigned char)49;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 737908465U;
long long int var_21 = -2069516874936557365LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
