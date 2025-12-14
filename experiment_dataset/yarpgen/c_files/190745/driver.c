#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32553;
unsigned char var_1 = (unsigned char)237;
unsigned short var_3 = (unsigned short)7838;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-20;
long long int var_7 = 8832941234239597518LL;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)127;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -4543490067143127017LL;
signed char var_16 = (signed char)109;
short var_17 = (short)10142;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
