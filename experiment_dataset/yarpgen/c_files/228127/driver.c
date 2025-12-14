#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
unsigned int var_1 = 1333373573U;
int var_2 = -1101047577;
unsigned long long int var_4 = 178425478862635383ULL;
unsigned short var_5 = (unsigned short)38346;
unsigned int var_6 = 4138674470U;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-113;
_Bool var_9 = (_Bool)0;
short var_10 = (short)23564;
unsigned short var_11 = (unsigned short)16269;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)141;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 982310766U;
void init() {
}

void checksum() {
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
