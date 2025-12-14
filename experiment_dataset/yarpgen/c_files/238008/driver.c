#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16062;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 17641365507851119438ULL;
unsigned long long int var_7 = 2822596670460409864ULL;
unsigned int var_8 = 3447544497U;
long long int var_9 = -2853792426560580705LL;
int var_12 = -956940121;
long long int var_17 = 4841640438909785472LL;
int zero = 0;
int var_18 = 588470569;
long long int var_19 = 6775890220633319777LL;
long long int var_20 = 7035911456475585822LL;
long long int var_21 = -375909793192670643LL;
unsigned int var_22 = 3748342704U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
