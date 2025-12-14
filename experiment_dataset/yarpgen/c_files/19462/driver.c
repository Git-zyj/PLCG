#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11712;
long long int var_3 = -545225640491863747LL;
long long int var_5 = -5521050457502825105LL;
_Bool var_6 = (_Bool)0;
int var_10 = 524641400;
long long int var_11 = 1311918885874151615LL;
unsigned long long int var_12 = 6897984614393164212ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4172965878U;
int zero = 0;
int var_15 = -1558193716;
unsigned long long int var_16 = 7703418738875356863ULL;
unsigned char var_17 = (unsigned char)50;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)26871;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
