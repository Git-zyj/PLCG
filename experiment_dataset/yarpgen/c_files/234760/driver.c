#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21147;
unsigned short var_2 = (unsigned short)10461;
signed char var_4 = (signed char)26;
unsigned long long int var_6 = 17717553147191884188ULL;
long long int var_7 = 5939431188123736465LL;
unsigned short var_8 = (unsigned short)42884;
short var_9 = (short)-14056;
short var_10 = (short)20108;
signed char var_11 = (signed char)-106;
unsigned int var_12 = 2207558103U;
unsigned short var_13 = (unsigned short)40244;
short var_14 = (short)30113;
unsigned short var_15 = (unsigned short)1425;
long long int var_16 = -467636531891290680LL;
int zero = 0;
unsigned long long int var_18 = 3790707468091520431ULL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 671965654U;
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
