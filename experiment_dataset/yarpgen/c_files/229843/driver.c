#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
unsigned int var_1 = 11250708U;
short var_3 = (short)15234;
unsigned short var_4 = (unsigned short)57057;
short var_5 = (short)23880;
long long int var_6 = 2353077871092469883LL;
long long int var_7 = 7513068192214755244LL;
unsigned int var_9 = 1536235699U;
short var_10 = (short)-6123;
unsigned short var_12 = (unsigned short)59864;
unsigned short var_13 = (unsigned short)16859;
int zero = 0;
int var_14 = -1917435096;
unsigned char var_15 = (unsigned char)105;
_Bool var_16 = (_Bool)0;
short var_17 = (short)20948;
short var_18 = (short)-23309;
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
