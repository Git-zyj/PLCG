#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9873015006569494678ULL;
unsigned char var_2 = (unsigned char)99;
unsigned short var_4 = (unsigned short)22925;
unsigned short var_5 = (unsigned short)10826;
long long int var_10 = 6919798938726240291LL;
unsigned short var_12 = (unsigned short)52794;
int zero = 0;
unsigned long long int var_15 = 6914734269357046899ULL;
unsigned int var_16 = 2470264383U;
unsigned char var_17 = (unsigned char)174;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
