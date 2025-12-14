#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1359181506;
unsigned int var_1 = 2833842643U;
unsigned short var_2 = (unsigned short)7153;
unsigned char var_3 = (unsigned char)101;
unsigned short var_4 = (unsigned short)57150;
int var_5 = -2059843274;
_Bool var_6 = (_Bool)1;
long long int var_7 = -9154407448668838289LL;
unsigned short var_8 = (unsigned short)44587;
unsigned short var_9 = (unsigned short)59247;
int zero = 0;
unsigned short var_10 = (unsigned short)33501;
unsigned short var_11 = (unsigned short)32955;
short var_12 = (short)3424;
unsigned char var_13 = (unsigned char)84;
signed char var_14 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
