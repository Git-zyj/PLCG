#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_10 = 5637409557824859475LL;
int var_13 = -1237536938;
int zero = 0;
short var_16 = (short)30942;
unsigned int var_17 = 3396950286U;
unsigned long long int var_18 = 16743664128846528996ULL;
unsigned int var_19 = 3553147291U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
