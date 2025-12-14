#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
long long int var_1 = -2953167779398044731LL;
unsigned short var_4 = (unsigned short)9931;
unsigned int var_6 = 3738484648U;
unsigned long long int var_8 = 1557156309619623240ULL;
unsigned int var_9 = 2137056150U;
int var_10 = 434041591;
short var_13 = (short)12921;
unsigned short var_15 = (unsigned short)7914;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 1833105225U;
signed char var_18 = (signed char)66;
unsigned int var_19 = 2348428788U;
long long int var_20 = -8891514172346150000LL;
unsigned char var_21 = (unsigned char)140;
void init() {
}

void checksum() {
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
