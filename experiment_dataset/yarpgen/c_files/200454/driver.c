#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 288020808;
unsigned short var_3 = (unsigned short)9889;
int var_4 = -1312912558;
unsigned int var_5 = 3193892516U;
int var_7 = 1638498622;
unsigned int var_8 = 1593237876U;
unsigned short var_11 = (unsigned short)65391;
signed char var_13 = (signed char)109;
int zero = 0;
unsigned short var_16 = (unsigned short)8563;
unsigned short var_17 = (unsigned short)9532;
unsigned long long int var_18 = 15305211455212779219ULL;
short var_19 = (short)-26482;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
