#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -4799411502924456610LL;
int var_2 = -1680448438;
unsigned char var_4 = (unsigned char)83;
unsigned char var_5 = (unsigned char)203;
long long int var_6 = -4197438156362302067LL;
int var_9 = 1249018989;
int var_10 = 837258408;
_Bool var_11 = (_Bool)0;
int var_12 = 407535689;
short var_13 = (short)-2865;
unsigned int var_14 = 2426113437U;
short var_15 = (short)18985;
unsigned int var_16 = 2297003828U;
int zero = 0;
unsigned char var_17 = (unsigned char)237;
signed char var_18 = (signed char)-29;
unsigned int var_19 = 3355729872U;
short var_20 = (short)-18637;
unsigned char var_21 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
