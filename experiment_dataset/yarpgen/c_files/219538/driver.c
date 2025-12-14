#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13363;
unsigned short var_1 = (unsigned short)30545;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)5858;
unsigned char var_6 = (unsigned char)144;
unsigned int var_7 = 4290913983U;
short var_8 = (short)-14575;
unsigned char var_9 = (unsigned char)122;
unsigned long long int var_10 = 4480694368767435881ULL;
unsigned long long int var_11 = 17874813833780665407ULL;
unsigned int var_12 = 858387296U;
unsigned long long int var_13 = 15642909168961932794ULL;
unsigned int var_16 = 3118363117U;
int zero = 0;
long long int var_17 = -2645662123080255187LL;
unsigned short var_18 = (unsigned short)18679;
short var_19 = (short)13047;
signed char var_20 = (signed char)32;
unsigned char var_21 = (unsigned char)61;
int var_22 = -174492713;
signed char var_23 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
