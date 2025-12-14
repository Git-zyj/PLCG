#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-28478;
_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 4790238192948236428ULL;
_Bool var_10 = (_Bool)1;
long long int var_11 = 1459381879963650612LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)22104;
int var_14 = 1245806459;
unsigned short var_15 = (unsigned short)55768;
unsigned char var_16 = (unsigned char)163;
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
