#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60700;
unsigned short var_1 = (unsigned short)61951;
short var_4 = (short)6268;
unsigned short var_9 = (unsigned short)29057;
unsigned short var_11 = (unsigned short)33726;
unsigned short var_12 = (unsigned short)17192;
signed char var_14 = (signed char)11;
unsigned char var_15 = (unsigned char)185;
int zero = 0;
unsigned short var_16 = (unsigned short)56174;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)51297;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
