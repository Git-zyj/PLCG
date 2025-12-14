#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21119;
int var_2 = -859575917;
_Bool var_7 = (_Bool)1;
long long int var_12 = -647759942141109435LL;
unsigned int var_14 = 2017597519U;
int zero = 0;
unsigned long long int var_16 = 3385313884918579971ULL;
unsigned short var_17 = (unsigned short)23408;
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
