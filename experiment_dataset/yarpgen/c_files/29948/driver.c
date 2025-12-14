#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5594;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2037302474U;
unsigned short var_12 = (unsigned short)2510;
unsigned long long int var_14 = 1229529789965525634ULL;
int zero = 0;
short var_15 = (short)-32029;
short var_16 = (short)-12634;
unsigned long long int var_17 = 4671799237815876218ULL;
void init() {
}

void checksum() {
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
