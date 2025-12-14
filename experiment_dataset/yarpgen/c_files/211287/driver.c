#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14248320165312487511ULL;
unsigned char var_1 = (unsigned char)119;
unsigned short var_2 = (unsigned short)2887;
unsigned char var_3 = (unsigned char)44;
int var_6 = -225351198;
long long int var_7 = 9186952752895762449LL;
int var_8 = -184153074;
int zero = 0;
unsigned short var_10 = (unsigned short)56711;
_Bool var_11 = (_Bool)1;
int var_12 = -2029619091;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
