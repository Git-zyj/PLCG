#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-96;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2355068137U;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)50;
short var_16 = (short)-15879;
int var_17 = 498349452;
int var_18 = -572956555;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
