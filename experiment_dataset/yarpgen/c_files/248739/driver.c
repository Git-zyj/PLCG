#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2283989183U;
signed char var_1 = (signed char)65;
short var_8 = (short)-21838;
unsigned short var_12 = (unsigned short)60182;
int var_18 = 1490299764;
int zero = 0;
unsigned long long int var_20 = 8147496766724825088ULL;
signed char var_21 = (signed char)119;
_Bool var_22 = (_Bool)1;
int var_23 = -1670560053;
int var_24 = -17448889;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
