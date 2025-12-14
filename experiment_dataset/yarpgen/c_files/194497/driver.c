#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = -5566448889942186383LL;
unsigned short var_6 = (unsigned short)2699;
unsigned short var_10 = (unsigned short)4945;
short var_13 = (short)-1434;
int zero = 0;
signed char var_15 = (signed char)-44;
long long int var_16 = -6896510412818390023LL;
unsigned long long int var_17 = 4664256058235235928ULL;
signed char var_18 = (signed char)-43;
void init() {
}

void checksum() {
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
