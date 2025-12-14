#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2351945351U;
unsigned long long int var_4 = 13046428483943045875ULL;
long long int var_5 = -8309742973221317272LL;
unsigned short var_6 = (unsigned short)17543;
unsigned char var_7 = (unsigned char)92;
unsigned long long int var_8 = 18121526577513125375ULL;
int var_10 = -1342000947;
int zero = 0;
short var_15 = (short)-21156;
int var_16 = -347890104;
unsigned int var_17 = 1983332726U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
