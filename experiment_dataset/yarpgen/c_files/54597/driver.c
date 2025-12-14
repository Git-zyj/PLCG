#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 732006072147040916ULL;
unsigned long long int var_6 = 958181020872909515ULL;
short var_8 = (short)21522;
signed char var_9 = (signed char)1;
_Bool var_11 = (_Bool)1;
unsigned long long int var_15 = 5403172636880563876ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 389956517U;
unsigned long long int var_18 = 4812736084976765427ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
