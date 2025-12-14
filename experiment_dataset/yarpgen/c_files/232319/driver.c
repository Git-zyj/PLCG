#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19400;
unsigned int var_2 = 956158891U;
int var_4 = 1365320632;
long long int var_6 = -6266084606972603320LL;
long long int var_7 = -2797078111138916294LL;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)70;
int zero = 0;
signed char var_16 = (signed char)21;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-33;
short var_19 = (short)-20821;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
