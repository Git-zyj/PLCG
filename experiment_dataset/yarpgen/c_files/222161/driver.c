#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-2629;
unsigned char var_5 = (unsigned char)201;
short var_7 = (short)-18550;
unsigned short var_8 = (unsigned short)23919;
short var_14 = (short)11593;
int var_19 = 883287462;
int zero = 0;
unsigned long long int var_20 = 17554671318722964238ULL;
unsigned long long int var_21 = 16265056854212332949ULL;
unsigned int var_22 = 2532165861U;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
