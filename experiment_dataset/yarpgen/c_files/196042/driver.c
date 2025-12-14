#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3912641600U;
unsigned long long int var_1 = 839999935638835905ULL;
long long int var_2 = -8405140897979221009LL;
unsigned long long int var_4 = 16643018850582590176ULL;
short var_8 = (short)-5455;
_Bool var_9 = (_Bool)0;
long long int var_10 = -6252231629595358428LL;
int zero = 0;
int var_15 = 204161940;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 13291593619187954307ULL;
unsigned int var_18 = 359718485U;
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
