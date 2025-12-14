#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)226;
long long int var_4 = -2054720242639528749LL;
unsigned int var_6 = 1466701044U;
signed char var_7 = (signed char)10;
unsigned char var_8 = (unsigned char)253;
int var_11 = 2080772022;
long long int var_12 = 5045466624517908453LL;
int var_13 = -204287517;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)45659;
unsigned char var_16 = (unsigned char)199;
unsigned char var_17 = (unsigned char)229;
long long int var_18 = -7845704758713300512LL;
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
