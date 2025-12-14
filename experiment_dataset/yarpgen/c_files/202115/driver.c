#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -456773768;
long long int var_4 = 1899149354368148775LL;
long long int var_7 = -6760612518177462572LL;
_Bool var_8 = (_Bool)0;
long long int var_12 = -5347220493270984604LL;
int var_13 = -1541686542;
int zero = 0;
long long int var_14 = 6052913230009695745LL;
unsigned int var_15 = 2437030996U;
unsigned int var_16 = 1866613024U;
void init() {
}

void checksum() {
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
