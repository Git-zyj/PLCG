#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1740970468;
unsigned int var_3 = 115159809U;
signed char var_4 = (signed char)-9;
unsigned long long int var_6 = 1285937542326496141ULL;
int var_15 = -930775924;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 339989203U;
short var_21 = (short)-27979;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
