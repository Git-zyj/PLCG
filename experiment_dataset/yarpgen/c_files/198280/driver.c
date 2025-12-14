#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6617153546596477217LL;
unsigned long long int var_1 = 14114260692688857581ULL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -3560225508908121643LL;
short var_5 = (short)6580;
long long int var_7 = -6636194119272663383LL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2698271324U;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_13 = -2721293792323711208LL;
unsigned short var_14 = (unsigned short)12356;
unsigned short var_15 = (unsigned short)32795;
void init() {
}

void checksum() {
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
