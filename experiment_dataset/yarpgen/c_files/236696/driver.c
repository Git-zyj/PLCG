#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 316655171U;
unsigned int var_4 = 2649809045U;
signed char var_7 = (signed char)-65;
long long int var_8 = 5778541823387137564LL;
unsigned int var_10 = 849183138U;
unsigned short var_12 = (unsigned short)15286;
_Bool var_15 = (_Bool)0;
long long int var_16 = 2351324210985871891LL;
signed char var_19 = (signed char)-79;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-20223;
unsigned int var_22 = 97735228U;
unsigned int var_23 = 3621216119U;
unsigned int var_24 = 1811963606U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
