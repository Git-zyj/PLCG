#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26702;
unsigned char var_1 = (unsigned char)66;
int var_3 = -988984288;
long long int var_6 = 8042002762899896006LL;
long long int var_7 = -1590708307331556064LL;
_Bool var_9 = (_Bool)0;
unsigned char var_15 = (unsigned char)218;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)15671;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
