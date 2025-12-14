#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5463168982728571355LL;
signed char var_1 = (signed char)-127;
unsigned short var_2 = (unsigned short)62492;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)140;
int var_6 = 1564328598;
int var_7 = 1821367437;
unsigned short var_8 = (unsigned short)23754;
signed char var_13 = (signed char)-53;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)36749;
unsigned char var_16 = (unsigned char)225;
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
