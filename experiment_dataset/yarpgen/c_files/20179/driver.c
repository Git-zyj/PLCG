#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
short var_1 = (short)21341;
unsigned int var_6 = 664847677U;
long long int var_12 = -5931115014832211901LL;
int zero = 0;
signed char var_16 = (signed char)-71;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)10337;
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
