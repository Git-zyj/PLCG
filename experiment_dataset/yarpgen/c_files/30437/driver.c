#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4065302740U;
signed char var_1 = (signed char)-103;
unsigned short var_3 = (unsigned short)31520;
unsigned char var_4 = (unsigned char)33;
unsigned short var_6 = (unsigned short)33137;
_Bool var_7 = (_Bool)0;
long long int var_8 = -3294759762293010963LL;
long long int var_10 = -3040305164990374465LL;
signed char var_11 = (signed char)10;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-118;
unsigned int var_15 = 931484767U;
unsigned short var_16 = (unsigned short)64914;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
