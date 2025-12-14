#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10715;
signed char var_3 = (signed char)-43;
unsigned char var_4 = (unsigned char)18;
short var_5 = (short)-5751;
short var_10 = (short)33;
_Bool var_11 = (_Bool)0;
long long int var_14 = 9173535424465995028LL;
unsigned short var_15 = (unsigned short)35297;
int zero = 0;
long long int var_17 = -430802168799600703LL;
long long int var_18 = -8136037246597612919LL;
void init() {
}

void checksum() {
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
