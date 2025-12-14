#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -768801681;
unsigned char var_1 = (unsigned char)147;
unsigned char var_3 = (unsigned char)171;
unsigned short var_9 = (unsigned short)57369;
int var_11 = -1862017769;
unsigned int var_12 = 573505324U;
unsigned short var_13 = (unsigned short)10725;
int zero = 0;
unsigned short var_16 = (unsigned short)6875;
unsigned short var_17 = (unsigned short)1911;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)149;
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
