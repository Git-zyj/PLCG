#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3142335016638217924LL;
signed char var_2 = (signed char)28;
unsigned short var_3 = (unsigned short)25506;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)25;
long long int var_10 = -1821411285330778057LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int var_13 = -2041018961;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 682564904;
unsigned char var_17 = (unsigned char)160;
int var_18 = 1594807718;
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
