#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2834285037U;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
long long int var_4 = 7915451623047511305LL;
unsigned short var_6 = (unsigned short)17499;
unsigned short var_7 = (unsigned short)51564;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)62757;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)1229;
unsigned short var_15 = (unsigned short)23133;
long long int var_16 = 7512053292861945816LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
