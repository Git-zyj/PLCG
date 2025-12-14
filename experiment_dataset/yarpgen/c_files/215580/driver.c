#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -259026263;
unsigned int var_2 = 322247859U;
short var_3 = (short)12688;
signed char var_5 = (signed char)-16;
unsigned int var_8 = 2896162479U;
short var_9 = (short)2948;
unsigned char var_12 = (unsigned char)25;
short var_15 = (short)1677;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = -316458339;
unsigned short var_19 = (unsigned short)48024;
unsigned int var_20 = 2681145184U;
short var_21 = (short)12831;
short var_22 = (short)-25747;
long long int var_23 = 881323533251910097LL;
short var_24 = (short)-8934;
unsigned int var_25 = 2495152444U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
