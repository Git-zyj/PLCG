#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 3147355208649073392ULL;
_Bool var_4 = (_Bool)1;
long long int var_6 = -6113799373947647064LL;
unsigned int var_8 = 877400683U;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 2268336920U;
unsigned int var_13 = 2330331354U;
unsigned short var_14 = (unsigned short)63897;
signed char var_16 = (signed char)(-127 - 1);
short var_17 = (short)25388;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)43730;
short var_21 = (short)-17717;
unsigned short var_22 = (unsigned short)6858;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
