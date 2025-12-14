#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 950048139;
long long int var_6 = -6520765586478737605LL;
_Bool var_8 = (_Bool)1;
int var_9 = -706098751;
int zero = 0;
unsigned short var_15 = (unsigned short)42314;
signed char var_16 = (signed char)-50;
long long int var_17 = 7496976106630761710LL;
int var_18 = -566322448;
unsigned short var_19 = (unsigned short)15737;
unsigned short var_20 = (unsigned short)45010;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
