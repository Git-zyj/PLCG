#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-38;
signed char var_4 = (signed char)26;
unsigned char var_5 = (unsigned char)215;
unsigned short var_6 = (unsigned short)16577;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)25;
unsigned char var_9 = (unsigned char)83;
unsigned short var_10 = (unsigned short)21358;
signed char var_11 = (signed char)-52;
signed char var_12 = (signed char)-94;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)101;
int zero = 0;
signed char var_16 = (signed char)-68;
unsigned short var_17 = (unsigned short)47035;
signed char var_18 = (signed char)-100;
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
