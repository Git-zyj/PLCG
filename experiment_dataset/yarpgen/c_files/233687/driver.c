#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20855;
_Bool var_1 = (_Bool)0;
int var_2 = 2077306103;
signed char var_9 = (signed char)-46;
unsigned long long int var_12 = 10206407082544545009ULL;
int var_13 = 823540901;
int zero = 0;
unsigned long long int var_15 = 16742434540421709355ULL;
unsigned long long int var_16 = 2110470403314310040ULL;
void init() {
}

void checksum() {
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
