#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1775211092;
int var_1 = -1384056886;
unsigned long long int var_3 = 65105460464624978ULL;
_Bool var_6 = (_Bool)0;
int var_7 = -1557390310;
int var_9 = -653577310;
unsigned short var_12 = (unsigned short)1788;
short var_15 = (short)18294;
int zero = 0;
unsigned long long int var_16 = 14375380903774906897ULL;
int var_17 = -327819580;
int var_18 = 200349235;
unsigned short var_19 = (unsigned short)29022;
short var_20 = (short)1159;
void init() {
}

void checksum() {
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
