#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 297945655U;
unsigned int var_2 = 1113928333U;
short var_3 = (short)-14933;
long long int var_4 = -6611868035966493280LL;
short var_6 = (short)27812;
long long int var_8 = 3416069038154006768LL;
unsigned int var_14 = 4030784720U;
int zero = 0;
signed char var_17 = (signed char)-95;
signed char var_18 = (signed char)42;
void init() {
}

void checksum() {
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
