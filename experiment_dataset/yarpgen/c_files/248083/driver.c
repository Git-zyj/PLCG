#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)86;
unsigned char var_7 = (unsigned char)195;
int var_8 = -215172337;
unsigned char var_10 = (unsigned char)105;
int var_12 = -1045027853;
short var_13 = (short)10051;
unsigned int var_14 = 1298362061U;
unsigned short var_16 = (unsigned short)64695;
int zero = 0;
unsigned long long int var_17 = 1309742606026859588ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 15458163586969449397ULL;
unsigned long long int var_20 = 7853413238912198371ULL;
void init() {
}

void checksum() {
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
