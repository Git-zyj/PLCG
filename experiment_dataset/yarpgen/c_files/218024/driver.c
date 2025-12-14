#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
short var_1 = (short)-14423;
unsigned int var_3 = 449753867U;
unsigned int var_6 = 3548555838U;
short var_9 = (short)-22647;
long long int var_10 = 9220621280617142256LL;
int var_15 = -1489332535;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2183171207U;
void init() {
}

void checksum() {
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
