#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)57;
unsigned short var_3 = (unsigned short)16726;
short var_8 = (short)-9812;
signed char var_11 = (signed char)81;
long long int var_12 = -4974921152052185141LL;
unsigned int var_13 = 4257042439U;
unsigned int var_14 = 3337615158U;
int zero = 0;
signed char var_16 = (signed char)89;
unsigned int var_17 = 2951342549U;
int var_18 = 428030733;
unsigned short var_19 = (unsigned short)53158;
unsigned long long int var_20 = 17151455481699197710ULL;
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
