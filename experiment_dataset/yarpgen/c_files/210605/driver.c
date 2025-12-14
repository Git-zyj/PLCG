#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2464073436U;
short var_3 = (short)-19707;
unsigned int var_4 = 1048561269U;
long long int var_5 = 7714311532852406992LL;
unsigned short var_7 = (unsigned short)36479;
unsigned int var_10 = 2017868686U;
int zero = 0;
int var_12 = -1324556320;
int var_13 = 1922679361;
unsigned short var_14 = (unsigned short)45149;
int var_15 = 952281292;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
