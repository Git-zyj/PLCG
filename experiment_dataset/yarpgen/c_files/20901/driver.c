#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)28;
unsigned long long int var_5 = 7376290599681746617ULL;
long long int var_6 = -258498450944629932LL;
signed char var_7 = (signed char)72;
unsigned int var_9 = 1456396042U;
short var_10 = (short)497;
short var_11 = (short)2704;
unsigned char var_12 = (unsigned char)179;
int zero = 0;
unsigned short var_14 = (unsigned short)7952;
_Bool var_15 = (_Bool)1;
short var_16 = (short)1041;
_Bool var_17 = (_Bool)0;
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
