#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = 3853575027350994043LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 13057950444870271057ULL;
int zero = 0;
short var_10 = (short)-9254;
short var_11 = (short)-1428;
unsigned long long int var_12 = 16890559568216222144ULL;
short var_13 = (short)14129;
long long int var_14 = -8618209195160528200LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
