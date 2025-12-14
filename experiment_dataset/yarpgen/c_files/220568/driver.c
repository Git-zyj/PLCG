#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3977036009U;
long long int var_2 = -2963931500020382604LL;
int var_5 = -610546015;
short var_6 = (short)-5779;
int var_7 = -259386575;
int var_9 = 2068071763;
int zero = 0;
int var_12 = -248606649;
unsigned long long int var_13 = 889181691614426487ULL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1232619832U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
