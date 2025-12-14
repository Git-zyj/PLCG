#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_7 = 957035748;
unsigned char var_9 = (unsigned char)32;
signed char var_10 = (signed char)-47;
unsigned char var_13 = (unsigned char)235;
long long int var_14 = -4453186758305126613LL;
int zero = 0;
short var_16 = (short)2095;
unsigned int var_17 = 3242434598U;
void init() {
}

void checksum() {
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
