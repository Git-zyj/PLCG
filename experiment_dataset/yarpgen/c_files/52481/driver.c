#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-115;
_Bool var_2 = (_Bool)1;
short var_7 = (short)-20577;
long long int var_9 = 4619315946976142004LL;
signed char var_10 = (signed char)63;
signed char var_11 = (signed char)10;
unsigned int var_12 = 3636775531U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 44907772U;
int var_15 = 142366147;
unsigned char var_16 = (unsigned char)228;
long long int var_17 = -3378813512941011470LL;
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
