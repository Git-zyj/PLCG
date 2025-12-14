#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56413;
unsigned char var_4 = (unsigned char)126;
unsigned char var_5 = (unsigned char)178;
unsigned short var_8 = (unsigned short)49327;
unsigned short var_10 = (unsigned short)8329;
unsigned char var_11 = (unsigned char)135;
unsigned short var_13 = (unsigned short)1090;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)6179;
unsigned short var_18 = (unsigned short)33023;
unsigned short var_19 = (unsigned short)21203;
void init() {
}

void checksum() {
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
