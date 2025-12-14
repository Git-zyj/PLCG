#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5331767310198688077LL;
unsigned int var_4 = 3215829718U;
_Bool var_7 = (_Bool)0;
short var_8 = (short)18039;
int var_9 = -157657718;
int zero = 0;
int var_12 = -1636206896;
unsigned char var_13 = (unsigned char)22;
unsigned int var_14 = 1816094089U;
unsigned short var_15 = (unsigned short)514;
void init() {
}

void checksum() {
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
