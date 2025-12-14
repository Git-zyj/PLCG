#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)244;
unsigned int var_3 = 736212941U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1671994673U;
unsigned long long int var_7 = 14940724742940528800ULL;
unsigned int var_8 = 58134027U;
short var_10 = (short)25813;
unsigned short var_12 = (unsigned short)16095;
int zero = 0;
int var_13 = -649141600;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
