#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
short var_5 = (short)31186;
unsigned short var_6 = (unsigned short)13385;
short var_9 = (short)-29119;
int var_11 = 1391334312;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)192;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)54;
long long int var_17 = 2134954960475894866LL;
unsigned short var_18 = (unsigned short)31305;
void init() {
}

void checksum() {
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
