#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60454;
short var_3 = (short)13354;
unsigned char var_4 = (unsigned char)144;
signed char var_6 = (signed char)124;
long long int var_8 = -5232313292206162189LL;
unsigned short var_9 = (unsigned short)8772;
unsigned short var_10 = (unsigned short)33729;
int zero = 0;
signed char var_11 = (signed char)-24;
short var_12 = (short)1317;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
