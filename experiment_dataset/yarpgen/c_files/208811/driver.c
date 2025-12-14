#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4683;
unsigned char var_1 = (unsigned char)64;
short var_4 = (short)-11603;
unsigned long long int var_5 = 15609052541395963889ULL;
short var_7 = (short)-12663;
short var_8 = (short)5849;
int zero = 0;
short var_13 = (short)-1745;
signed char var_14 = (signed char)-30;
short var_15 = (short)-13413;
_Bool var_16 = (_Bool)1;
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
