#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38235;
long long int var_2 = 6962064523945188697LL;
unsigned short var_3 = (unsigned short)56891;
int var_7 = 1696964448;
unsigned short var_10 = (unsigned short)47454;
int zero = 0;
short var_14 = (short)6453;
unsigned short var_15 = (unsigned short)61735;
unsigned char var_16 = (unsigned char)229;
signed char var_17 = (signed char)-89;
signed char var_18 = (signed char)12;
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
