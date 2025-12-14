#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 12297379380947283637ULL;
signed char var_7 = (signed char)95;
unsigned short var_8 = (unsigned short)48967;
signed char var_12 = (signed char)120;
int zero = 0;
short var_17 = (short)-17904;
short var_18 = (short)-987;
signed char var_19 = (signed char)100;
_Bool var_20 = (_Bool)1;
long long int var_21 = -6840172272761015609LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
