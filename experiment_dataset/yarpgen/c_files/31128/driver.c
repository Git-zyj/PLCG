#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12193570508407559779ULL;
_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)0;
long long int var_5 = -6813337440076460149LL;
signed char var_9 = (signed char)85;
unsigned int var_11 = 2309867283U;
int zero = 0;
long long int var_12 = -336982697472718740LL;
unsigned int var_13 = 3819436054U;
signed char var_14 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
