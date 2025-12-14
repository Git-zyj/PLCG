#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2470289723U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 6385115329779900260ULL;
int var_9 = 1006861191;
signed char var_11 = (signed char)97;
short var_12 = (short)-4825;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_16 = (short)-1796;
unsigned int var_17 = 1344251171U;
short var_18 = (short)6516;
short var_19 = (short)21084;
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
