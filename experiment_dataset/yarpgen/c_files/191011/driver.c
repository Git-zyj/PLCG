#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 647637775;
int var_2 = 153802096;
int var_5 = 1540613214;
short var_10 = (short)20662;
int var_12 = -1527468257;
int var_15 = 656552747;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)748;
void init() {
}

void checksum() {
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
