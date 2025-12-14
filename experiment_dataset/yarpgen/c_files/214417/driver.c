#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -317783146;
unsigned int var_2 = 3358177281U;
unsigned short var_7 = (unsigned short)48547;
_Bool var_9 = (_Bool)0;
int var_13 = -1186210901;
long long int var_14 = 2529343665718477530LL;
int zero = 0;
unsigned char var_15 = (unsigned char)22;
unsigned short var_16 = (unsigned short)9844;
void init() {
}

void checksum() {
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
