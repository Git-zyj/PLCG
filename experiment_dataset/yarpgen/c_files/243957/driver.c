#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
unsigned char var_1 = (unsigned char)2;
long long int var_8 = -3429049688948204007LL;
unsigned int var_11 = 1174585436U;
int var_14 = 1723560474;
unsigned char var_15 = (unsigned char)227;
unsigned char var_17 = (unsigned char)189;
int zero = 0;
unsigned int var_20 = 1106469737U;
int var_21 = -544572925;
signed char var_22 = (signed char)-79;
unsigned int var_23 = 3921233702U;
unsigned short var_24 = (unsigned short)47642;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
