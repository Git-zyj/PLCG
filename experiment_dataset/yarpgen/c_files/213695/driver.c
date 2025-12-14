#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)47;
signed char var_8 = (signed char)18;
unsigned int var_12 = 916600099U;
unsigned short var_13 = (unsigned short)32039;
short var_14 = (short)-9954;
unsigned long long int var_15 = 6313530710215629604ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)162;
unsigned long long int var_18 = 4067726967847945812ULL;
unsigned int var_19 = 331325793U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
