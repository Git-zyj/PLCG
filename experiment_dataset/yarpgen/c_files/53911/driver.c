#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)63588;
int var_4 = -2097008913;
signed char var_6 = (signed char)91;
_Bool var_7 = (_Bool)0;
long long int var_9 = -4794129643898364034LL;
int var_10 = -1825294109;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3063802198U;
unsigned short var_16 = (unsigned short)730;
long long int var_17 = -4333136092188607147LL;
short var_18 = (short)28522;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
