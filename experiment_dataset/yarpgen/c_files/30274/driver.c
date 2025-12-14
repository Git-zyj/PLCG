#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2761872834U;
short var_3 = (short)-1443;
long long int var_6 = 7597599322991889472LL;
short var_8 = (short)-1439;
unsigned int var_9 = 4038312287U;
signed char var_10 = (signed char)5;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)565;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 2104566U;
unsigned int var_18 = 3348364520U;
unsigned char var_19 = (unsigned char)187;
unsigned char var_20 = (unsigned char)112;
long long int var_21 = -637576746504128069LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
