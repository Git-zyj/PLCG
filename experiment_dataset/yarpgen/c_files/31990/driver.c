#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)4956;
int var_5 = -1022609466;
unsigned int var_6 = 325671926U;
_Bool var_9 = (_Bool)0;
long long int var_10 = -3986786147982567693LL;
unsigned short var_12 = (unsigned short)3327;
signed char var_13 = (signed char)-26;
int zero = 0;
unsigned short var_17 = (unsigned short)20727;
short var_18 = (short)-19533;
long long int var_19 = -6231789162460882790LL;
short var_20 = (short)-9071;
unsigned char var_21 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
