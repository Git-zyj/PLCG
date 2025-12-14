#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
unsigned short var_1 = (unsigned short)32552;
signed char var_5 = (signed char)-57;
signed char var_7 = (signed char)6;
unsigned long long int var_9 = 10329409725493365890ULL;
unsigned short var_11 = (unsigned short)27695;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)10;
unsigned int var_14 = 954105850U;
long long int var_15 = -9210791365169964903LL;
int zero = 0;
short var_16 = (short)-16935;
signed char var_17 = (signed char)-97;
unsigned char var_18 = (unsigned char)253;
int var_19 = -1097876022;
int var_20 = -823646047;
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
