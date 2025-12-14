#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)22157;
unsigned char var_6 = (unsigned char)227;
_Bool var_8 = (_Bool)0;
int var_9 = -590329781;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)19634;
int zero = 0;
unsigned long long int var_14 = 2531834315304145398ULL;
int var_15 = 1388918421;
unsigned long long int var_16 = 6030405799217556003ULL;
unsigned long long int var_17 = 2890587254806345187ULL;
unsigned int var_18 = 1431735930U;
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
