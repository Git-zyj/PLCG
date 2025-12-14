#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 3672322484U;
signed char var_3 = (signed char)-94;
long long int var_4 = 3899266554765744297LL;
unsigned short var_6 = (unsigned short)61467;
signed char var_9 = (signed char)7;
signed char var_10 = (signed char)-112;
int zero = 0;
long long int var_12 = 1594321272403845728LL;
long long int var_13 = -8517541463127913716LL;
unsigned short var_14 = (unsigned short)37956;
void init() {
}

void checksum() {
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
