#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55938;
unsigned char var_3 = (unsigned char)187;
unsigned long long int var_6 = 434550849040926474ULL;
short var_8 = (short)-13944;
int var_10 = 2050688656;
short var_11 = (short)-5544;
unsigned short var_14 = (unsigned short)21196;
int zero = 0;
unsigned int var_15 = 3660366867U;
unsigned long long int var_16 = 17368469054084366834ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)19067;
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
