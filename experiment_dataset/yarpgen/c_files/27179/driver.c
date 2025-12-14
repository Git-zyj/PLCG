#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3045454637U;
int var_5 = 14495470;
long long int var_6 = 3760385754494172250LL;
_Bool var_7 = (_Bool)0;
short var_11 = (short)-18274;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)100;
int zero = 0;
signed char var_14 = (signed char)-53;
unsigned short var_15 = (unsigned short)54884;
unsigned long long int var_16 = 9188545191278487383ULL;
short var_17 = (short)-23120;
unsigned long long int var_18 = 4803368759694961451ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
