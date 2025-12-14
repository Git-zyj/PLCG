#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
signed char var_1 = (signed char)119;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)2;
long long int var_7 = -483061743462547712LL;
short var_8 = (short)23321;
long long int var_9 = -8832570138071797396LL;
signed char var_10 = (signed char)57;
unsigned char var_11 = (unsigned char)64;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)42598;
short var_15 = (short)28683;
int var_16 = -161473681;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
