#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
int var_2 = -1376813688;
signed char var_8 = (signed char)51;
unsigned long long int var_11 = 17864983231630797769ULL;
long long int var_12 = 4327634404708322603LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)352;
long long int var_16 = 1013521844446573628LL;
signed char var_17 = (signed char)-61;
int zero = 0;
unsigned long long int var_19 = 2436842510358179745ULL;
signed char var_20 = (signed char)-68;
unsigned int var_21 = 2073437898U;
short var_22 = (short)-18413;
long long int var_23 = -5944243602432125021LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
