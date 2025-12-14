#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8539195546979111812ULL;
unsigned int var_2 = 1508747766U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 734261071U;
unsigned int var_9 = 251123161U;
unsigned char var_10 = (unsigned char)57;
long long int var_11 = -6118519476348808808LL;
short var_13 = (short)5555;
unsigned long long int var_14 = 15352504538679584551ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)45336;
unsigned long long int var_16 = 10040190718895108317ULL;
unsigned short var_17 = (unsigned short)40765;
unsigned int var_18 = 2159975052U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
