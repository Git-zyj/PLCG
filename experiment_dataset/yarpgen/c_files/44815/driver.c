#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -693820432;
long long int var_3 = 7160077451057639219LL;
short var_5 = (short)-29185;
unsigned short var_6 = (unsigned short)58020;
long long int var_7 = -6464361951480008161LL;
long long int var_8 = -1782773524106910808LL;
signed char var_9 = (signed char)-78;
int zero = 0;
unsigned char var_14 = (unsigned char)141;
unsigned char var_15 = (unsigned char)62;
long long int var_16 = 8759691161775523557LL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3530278075U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
