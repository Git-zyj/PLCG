#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6153797847778696625LL;
unsigned char var_4 = (unsigned char)83;
unsigned char var_5 = (unsigned char)13;
int var_8 = -617779932;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_13 = -4462295818039325652LL;
short var_14 = (short)-16035;
long long int var_15 = -7413436337845022009LL;
int var_16 = 1035243157;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
