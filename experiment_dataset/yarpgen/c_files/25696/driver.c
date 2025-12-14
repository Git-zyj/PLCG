#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_4 = (signed char)5;
int var_7 = -1910434446;
short var_10 = (short)-21419;
unsigned short var_13 = (unsigned short)34377;
int var_14 = 372116690;
signed char var_15 = (signed char)110;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)52329;
short var_18 = (short)1158;
unsigned long long int var_19 = 7381159500186331943ULL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2953737087U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
