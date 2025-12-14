#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
short var_1 = (short)-22573;
long long int var_2 = 3395053176882029354LL;
unsigned int var_4 = 2614452277U;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-125;
int var_7 = 1731404582;
long long int var_9 = 1381203597727958508LL;
unsigned short var_10 = (unsigned short)32194;
unsigned long long int var_11 = 4527196001571601411ULL;
int var_12 = 1677969387;
short var_14 = (short)-18133;
int zero = 0;
int var_15 = -1523832360;
int var_16 = 64939269;
unsigned long long int var_17 = 6287373626478074294ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
