#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16918578357871027299ULL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)17699;
short var_11 = (short)-26736;
signed char var_12 = (signed char)-76;
int zero = 0;
unsigned int var_13 = 656125000U;
unsigned long long int var_14 = 2145534075008817541ULL;
unsigned char var_15 = (unsigned char)196;
signed char var_16 = (signed char)-108;
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
