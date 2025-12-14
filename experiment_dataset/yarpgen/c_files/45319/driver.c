#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2033371308;
unsigned long long int var_2 = 7190087384286085263ULL;
signed char var_3 = (signed char)-31;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-117;
signed char var_7 = (signed char)114;
short var_8 = (short)-1561;
short var_9 = (short)-24817;
unsigned long long int var_10 = 10470812618405641988ULL;
unsigned long long int var_11 = 11386863443937760371ULL;
short var_12 = (short)-4128;
int zero = 0;
unsigned long long int var_13 = 10478003560861970115ULL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-2315;
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
