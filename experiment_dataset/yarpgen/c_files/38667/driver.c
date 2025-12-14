#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2445593831U;
unsigned short var_1 = (unsigned short)6714;
unsigned long long int var_2 = 13894833423937508943ULL;
long long int var_6 = 5253952039653760483LL;
unsigned long long int var_7 = 15015885586246066269ULL;
short var_9 = (short)28710;
int var_10 = -1917338439;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)84;
unsigned short var_16 = (unsigned short)63168;
unsigned short var_17 = (unsigned short)23444;
unsigned short var_19 = (unsigned short)37334;
int zero = 0;
unsigned short var_20 = (unsigned short)62254;
unsigned short var_21 = (unsigned short)3460;
signed char var_22 = (signed char)23;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)6;
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
