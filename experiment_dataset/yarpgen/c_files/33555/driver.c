#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4215873181U;
unsigned long long int var_11 = 12039359511702322311ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_17 = -175112386051013252LL;
long long int var_18 = -6622066755309656419LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
