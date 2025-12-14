#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)29299;
signed char var_4 = (signed char)46;
unsigned char var_5 = (unsigned char)62;
_Bool var_7 = (_Bool)1;
long long int var_8 = 7902512910866098131LL;
unsigned int var_9 = 3015253797U;
int zero = 0;
short var_11 = (short)-22402;
unsigned long long int var_12 = 5015106057781892765ULL;
unsigned int var_13 = 3092586997U;
_Bool var_14 = (_Bool)0;
int var_15 = -1136508123;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
