#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3029508697U;
int var_7 = -19809304;
short var_8 = (short)7690;
_Bool var_11 = (_Bool)0;
int var_14 = 384444429;
int zero = 0;
unsigned int var_17 = 4069456648U;
unsigned short var_18 = (unsigned short)24541;
int var_19 = -1272314938;
signed char var_20 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
