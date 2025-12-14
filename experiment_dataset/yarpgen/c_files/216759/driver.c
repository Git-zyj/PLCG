#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -4706460608559480143LL;
unsigned int var_7 = 941755017U;
int zero = 0;
unsigned int var_12 = 3112875368U;
long long int var_13 = -3317322900232780838LL;
short var_14 = (short)-13868;
unsigned long long int var_15 = 14806011975258721963ULL;
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
