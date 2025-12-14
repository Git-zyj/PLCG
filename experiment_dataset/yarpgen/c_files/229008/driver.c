#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3907864419U;
unsigned int var_1 = 2112654270U;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
short var_11 = (short)20842;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)60929;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -896002230;
unsigned short var_17 = (unsigned short)17499;
unsigned int var_18 = 3808351181U;
unsigned int var_19 = 3270397483U;
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
