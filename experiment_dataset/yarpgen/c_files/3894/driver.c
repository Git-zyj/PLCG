#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2113090476U;
unsigned char var_2 = (unsigned char)173;
unsigned char var_3 = (unsigned char)169;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)57942;
short var_11 = (short)26040;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 6300931811319685234LL;
unsigned short var_14 = (unsigned short)26679;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2633928526U;
long long int var_17 = 8417729975324233811LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
