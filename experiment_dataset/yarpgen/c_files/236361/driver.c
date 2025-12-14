#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
unsigned int var_3 = 3989051556U;
unsigned int var_4 = 3961982197U;
long long int var_5 = 1268227758876834505LL;
unsigned short var_6 = (unsigned short)46666;
long long int var_8 = -5268512914475449321LL;
unsigned int var_9 = 695398787U;
unsigned short var_10 = (unsigned short)32153;
int zero = 0;
long long int var_12 = 330332372932424252LL;
unsigned int var_13 = 3106339637U;
long long int var_14 = -5189762333972898879LL;
unsigned short var_15 = (unsigned short)16057;
unsigned char var_16 = (unsigned char)206;
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
