#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2178695492U;
unsigned long long int var_1 = 11861693368764606243ULL;
long long int var_6 = -2353927030403356906LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -409682029352828492LL;
short var_12 = (short)406;
unsigned long long int var_14 = 13957735642139546527ULL;
int zero = 0;
short var_15 = (short)27503;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)29;
short var_18 = (short)11419;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
