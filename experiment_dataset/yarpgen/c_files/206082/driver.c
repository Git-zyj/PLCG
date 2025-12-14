#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 5822816712740367277ULL;
unsigned long long int var_7 = 4072877576307051235ULL;
unsigned short var_10 = (unsigned short)10812;
int var_12 = 276295978;
unsigned short var_13 = (unsigned short)31805;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7132704344338646468ULL;
int zero = 0;
unsigned long long int var_18 = 17498217544096628154ULL;
unsigned short var_19 = (unsigned short)60504;
short var_20 = (short)5073;
void init() {
}

void checksum() {
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
