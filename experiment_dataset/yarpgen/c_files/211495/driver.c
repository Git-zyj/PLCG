#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4819;
signed char var_4 = (signed char)-5;
short var_5 = (short)24974;
long long int var_12 = -5981427614830383162LL;
int zero = 0;
int var_14 = 1580519525;
unsigned int var_15 = 3372911629U;
unsigned int var_16 = 2348142640U;
signed char var_17 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
