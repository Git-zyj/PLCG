#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17291;
unsigned char var_4 = (unsigned char)7;
unsigned long long int var_7 = 2898237299490132866ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)6736;
int zero = 0;
unsigned short var_12 = (unsigned short)57796;
int var_13 = 176086414;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)54317;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
