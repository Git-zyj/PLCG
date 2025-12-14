#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 342090487;
long long int var_2 = 3321078329512733212LL;
unsigned short var_5 = (unsigned short)63184;
signed char var_7 = (signed char)9;
_Bool var_8 = (_Bool)0;
int var_11 = 1905750411;
unsigned short var_12 = (unsigned short)35425;
int zero = 0;
unsigned short var_13 = (unsigned short)7376;
unsigned long long int var_14 = 17359738516966182382ULL;
short var_15 = (short)-1229;
short var_16 = (short)8385;
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
