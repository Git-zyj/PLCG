#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)90;
long long int var_3 = -595895663634196133LL;
unsigned short var_5 = (unsigned short)28285;
short var_7 = (short)30971;
int var_8 = 1163155126;
unsigned short var_9 = (unsigned short)33319;
short var_10 = (short)29163;
unsigned short var_14 = (unsigned short)59696;
short var_17 = (short)-27332;
unsigned short var_18 = (unsigned short)23005;
int zero = 0;
unsigned short var_20 = (unsigned short)15194;
unsigned int var_21 = 1482804365U;
short var_22 = (short)14229;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
