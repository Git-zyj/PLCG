#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3189057370U;
unsigned short var_1 = (unsigned short)9944;
_Bool var_4 = (_Bool)1;
short var_6 = (short)9939;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3667966016U;
unsigned short var_11 = (unsigned short)22238;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 3766339364U;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3615515765U;
unsigned int var_20 = 436651596U;
short var_21 = (short)-26186;
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
