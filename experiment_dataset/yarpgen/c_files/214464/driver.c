#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_10 = (signed char)-31;
_Bool var_11 = (_Bool)0;
unsigned long long int var_16 = 7167383467453955024ULL;
int var_17 = -1101763316;
int zero = 0;
int var_18 = -1018743733;
signed char var_19 = (signed char)10;
int var_20 = 180531453;
void init() {
}

void checksum() {
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
