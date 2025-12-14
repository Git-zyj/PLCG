#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_13 = (short)23377;
signed char var_14 = (signed char)81;
long long int var_15 = -3398785329422560579LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -4512487382792421990LL;
unsigned long long int var_19 = 5076841068856411822ULL;
void init() {
}

void checksum() {
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
