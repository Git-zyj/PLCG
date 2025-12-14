#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 574381488;
unsigned long long int var_2 = 15302229921641223780ULL;
int var_4 = 91729947;
unsigned long long int var_5 = 758587598779238071ULL;
unsigned long long int var_9 = 2270458229763281825ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 12510085870796716704ULL;
unsigned char var_12 = (unsigned char)85;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 4725140045356747735ULL;
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
