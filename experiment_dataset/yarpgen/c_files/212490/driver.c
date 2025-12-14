#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
unsigned char var_1 = (unsigned char)89;
unsigned long long int var_2 = 8881868364327268478ULL;
unsigned long long int var_3 = 4554072366119533862ULL;
unsigned short var_4 = (unsigned short)34921;
signed char var_5 = (signed char)-81;
short var_6 = (short)-31489;
unsigned char var_7 = (unsigned char)44;
unsigned long long int var_8 = 13391219717878748867ULL;
unsigned int var_9 = 1509810540U;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)54;
unsigned int var_15 = 1649869196U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
