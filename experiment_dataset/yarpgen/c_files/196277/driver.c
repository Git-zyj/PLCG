#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1930054152U;
_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)-38;
unsigned short var_7 = (unsigned short)43678;
unsigned short var_12 = (unsigned short)60112;
int zero = 0;
int var_13 = -1828821764;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 17086910957739927864ULL;
unsigned short var_16 = (unsigned short)49066;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
