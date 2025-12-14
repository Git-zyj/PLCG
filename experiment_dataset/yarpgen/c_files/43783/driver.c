#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18315;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)10707;
short var_4 = (short)16303;
unsigned char var_6 = (unsigned char)152;
long long int var_9 = 6030101328896596487LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)80;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3302131096U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
