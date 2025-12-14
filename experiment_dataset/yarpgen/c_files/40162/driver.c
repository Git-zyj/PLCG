#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 48243078;
_Bool var_3 = (_Bool)1;
long long int var_7 = -7147431317263793010LL;
int var_9 = -789133945;
int zero = 0;
int var_10 = 355334025;
unsigned int var_11 = 4211866383U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
