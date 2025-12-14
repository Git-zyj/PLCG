#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)63569;
_Bool var_3 = (_Bool)0;
int var_4 = 1369547786;
unsigned long long int var_5 = 16971545898358324814ULL;
long long int var_6 = -3002411100354222499LL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)27;
unsigned short var_9 = (unsigned short)39674;
int zero = 0;
signed char var_10 = (signed char)28;
long long int var_11 = -8548883992990708778LL;
int var_12 = 1349112247;
short var_13 = (short)5436;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
