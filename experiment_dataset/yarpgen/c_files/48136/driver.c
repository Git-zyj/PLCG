#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3007566143U;
_Bool var_2 = (_Bool)1;
short var_5 = (short)-31312;
short var_7 = (short)8476;
unsigned long long int var_14 = 13191560534361141117ULL;
_Bool var_15 = (_Bool)0;
int var_17 = -1683079253;
int var_18 = -662193500;
int zero = 0;
int var_19 = -737129167;
short var_20 = (short)3062;
unsigned char var_21 = (unsigned char)105;
unsigned short var_22 = (unsigned short)21734;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
