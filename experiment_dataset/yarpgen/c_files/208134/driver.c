#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1733539434U;
unsigned char var_3 = (unsigned char)233;
long long int var_4 = -6406273146857194625LL;
unsigned int var_6 = 4133151352U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)28934;
long long int var_9 = 54953204513749484LL;
unsigned int var_12 = 1788910326U;
unsigned char var_13 = (unsigned char)183;
int zero = 0;
unsigned int var_14 = 3747099262U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 890337427U;
long long int var_17 = 3047473598046285367LL;
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
