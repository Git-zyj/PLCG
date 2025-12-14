#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3959098400U;
unsigned long long int var_9 = 4142333298808693136ULL;
long long int var_11 = 3906912901555874082LL;
unsigned int var_13 = 3410806635U;
int zero = 0;
signed char var_16 = (signed char)-80;
unsigned int var_17 = 3508071737U;
unsigned long long int var_18 = 5965851053634117905ULL;
unsigned int var_19 = 3633564441U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
