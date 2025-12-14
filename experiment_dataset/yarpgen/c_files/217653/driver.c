#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9145828837402632495LL;
signed char var_2 = (signed char)55;
int var_4 = -119267038;
unsigned int var_5 = 137203895U;
long long int var_6 = -3804785531402246780LL;
unsigned char var_7 = (unsigned char)8;
_Bool var_8 = (_Bool)0;
long long int var_9 = -1024016277026920568LL;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-23786;
unsigned short var_13 = (unsigned short)23638;
long long int var_14 = 3474317497360189848LL;
short var_16 = (short)15593;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 761912249054902435LL;
unsigned short var_21 = (unsigned short)48075;
int var_22 = 2140354987;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
