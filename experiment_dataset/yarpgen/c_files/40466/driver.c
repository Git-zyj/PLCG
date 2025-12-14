#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
signed char var_1 = (signed char)-14;
long long int var_2 = 2287386442316232501LL;
signed char var_4 = (signed char)48;
int var_5 = 720535847;
int var_6 = 1223649331;
short var_7 = (short)-20687;
int zero = 0;
unsigned short var_10 = (unsigned short)11060;
unsigned int var_11 = 2308688540U;
unsigned char var_12 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
