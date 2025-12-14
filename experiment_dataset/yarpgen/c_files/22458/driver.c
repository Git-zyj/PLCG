#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)189;
int var_6 = 193912140;
short var_7 = (short)3564;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_15 = -661282982;
unsigned char var_16 = (unsigned char)110;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)6;
long long int var_19 = -6709179114418634002LL;
int var_20 = 1730876354;
long long int var_21 = -9006414448187311407LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
