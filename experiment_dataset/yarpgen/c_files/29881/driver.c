#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21511;
signed char var_1 = (signed char)38;
signed char var_2 = (signed char)52;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 3329735472U;
int var_8 = 1021772330;
int var_9 = -565077403;
unsigned long long int var_12 = 5187186440838783895ULL;
int var_13 = 1657841626;
int zero = 0;
unsigned long long int var_14 = 4203826568721219599ULL;
unsigned int var_15 = 2593321981U;
signed char var_16 = (signed char)105;
unsigned int var_17 = 3866191393U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
