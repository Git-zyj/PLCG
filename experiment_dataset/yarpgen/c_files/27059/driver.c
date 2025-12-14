#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21921;
_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)-18;
int var_8 = 893167279;
unsigned int var_12 = 3475181172U;
long long int var_13 = 437639405517635903LL;
unsigned short var_14 = (unsigned short)54741;
int zero = 0;
unsigned long long int var_16 = 2067603485622651004ULL;
short var_17 = (short)-29901;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
