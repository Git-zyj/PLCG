#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9887;
short var_7 = (short)25457;
unsigned long long int var_9 = 2319654793452247451ULL;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-3292;
short var_15 = (short)32698;
_Bool var_16 = (_Bool)0;
short var_17 = (short)24639;
short var_18 = (short)29123;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
