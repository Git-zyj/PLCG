#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
long long int var_2 = 8090187021750846233LL;
unsigned int var_3 = 1390205989U;
unsigned int var_4 = 650262178U;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 9159468616046297255ULL;
int var_12 = -241545954;
long long int var_13 = 4017835874963839031LL;
void init() {
}

void checksum() {
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
