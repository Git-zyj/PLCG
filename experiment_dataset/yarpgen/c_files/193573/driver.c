#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
unsigned long long int var_3 = 13839067982613951889ULL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -6070835403009529290LL;
unsigned int var_9 = 1630849556U;
signed char var_14 = (signed char)-81;
unsigned short var_16 = (unsigned short)17408;
short var_18 = (short)-16841;
short var_19 = (short)26404;
int zero = 0;
unsigned int var_20 = 2406920760U;
unsigned int var_21 = 2390757918U;
_Bool var_22 = (_Bool)0;
int var_23 = -1657145530;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
