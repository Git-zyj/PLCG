#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_5 = (short)11192;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 316519027U;
unsigned short var_9 = (unsigned short)30011;
unsigned short var_10 = (unsigned short)42265;
long long int var_13 = -112877052481559659LL;
short var_15 = (short)26249;
int zero = 0;
unsigned long long int var_16 = 10238477978530856595ULL;
long long int var_17 = 2515368885528307897LL;
short var_18 = (short)-23935;
void init() {
}

void checksum() {
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
