#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 386248404U;
unsigned short var_5 = (unsigned short)30524;
unsigned char var_6 = (unsigned char)76;
unsigned long long int var_10 = 2957753657533904847ULL;
short var_15 = (short)2155;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 14117527816949557657ULL;
unsigned int var_18 = 108304751U;
int zero = 0;
unsigned char var_19 = (unsigned char)221;
unsigned short var_20 = (unsigned short)41301;
unsigned short var_21 = (unsigned short)59396;
unsigned short var_22 = (unsigned short)10268;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
