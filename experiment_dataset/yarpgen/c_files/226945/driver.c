#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8161191289920993320ULL;
short var_3 = (short)2595;
_Bool var_4 = (_Bool)0;
long long int var_6 = -2018570367015140009LL;
int var_7 = 1485125579;
unsigned long long int var_9 = 521311072213416915ULL;
int zero = 0;
signed char var_16 = (signed char)127;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)6596;
unsigned long long int var_19 = 6795461898473120092ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
