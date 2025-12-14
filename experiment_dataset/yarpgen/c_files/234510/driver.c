#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)-9;
unsigned long long int var_6 = 1814854814699692016ULL;
int var_9 = 326899233;
int var_10 = 1419493609;
unsigned int var_12 = 4119326784U;
unsigned int var_13 = 2493720779U;
int zero = 0;
unsigned char var_16 = (unsigned char)248;
_Bool var_17 = (_Bool)0;
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
