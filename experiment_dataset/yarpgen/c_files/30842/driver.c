#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1581236418U;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-30915;
signed char var_13 = (signed char)-83;
int zero = 0;
long long int var_16 = 2634558694008412870LL;
short var_17 = (short)-8121;
unsigned short var_18 = (unsigned short)5766;
long long int var_19 = 2275027128719865175LL;
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
