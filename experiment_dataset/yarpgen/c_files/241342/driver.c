#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 817998027U;
signed char var_4 = (signed char)-9;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 11972490259879078951ULL;
unsigned short var_10 = (unsigned short)30146;
int var_11 = 1842804497;
int zero = 0;
short var_16 = (short)-22041;
short var_17 = (short)-1244;
long long int var_18 = 1390046216757350387LL;
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
