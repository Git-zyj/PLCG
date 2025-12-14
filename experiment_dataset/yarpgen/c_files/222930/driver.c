#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6556327935805439489ULL;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)102;
int var_7 = 1389439105;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)18392;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)21711;
signed char var_18 = (signed char)10;
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
