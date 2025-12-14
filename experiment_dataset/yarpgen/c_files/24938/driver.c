#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34332;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)43978;
unsigned short var_9 = (unsigned short)44821;
short var_10 = (short)29270;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)142;
long long int var_20 = -1198602779107434057LL;
void init() {
}

void checksum() {
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
