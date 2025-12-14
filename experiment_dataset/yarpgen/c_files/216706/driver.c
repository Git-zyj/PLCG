#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -800201283;
signed char var_1 = (signed char)-5;
int var_2 = 250116264;
long long int var_3 = 6984823242569036434LL;
short var_4 = (short)26823;
unsigned int var_5 = 2559767971U;
unsigned int var_6 = 2591027863U;
signed char var_10 = (signed char)42;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = 617717611;
signed char var_14 = (signed char)4;
unsigned int var_15 = 451232774U;
long long int var_16 = -5716272461873225342LL;
short var_17 = (short)1218;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
