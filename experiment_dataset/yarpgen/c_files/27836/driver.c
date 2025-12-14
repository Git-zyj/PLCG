#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 416534899;
long long int var_2 = -5332944291122257561LL;
short var_5 = (short)27045;
unsigned char var_7 = (unsigned char)250;
unsigned char var_8 = (unsigned char)40;
short var_9 = (short)-17411;
unsigned char var_10 = (unsigned char)206;
unsigned int var_13 = 3124623172U;
long long int var_14 = 8867152783857832615LL;
int zero = 0;
int var_15 = -631968143;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-17;
unsigned long long int var_18 = 1894797019425207267ULL;
unsigned char var_19 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
