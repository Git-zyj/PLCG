#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15897;
unsigned long long int var_3 = 5280534168425313704ULL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)6894;
short var_8 = (short)-14105;
unsigned int var_9 = 1760179376U;
unsigned char var_10 = (unsigned char)132;
int zero = 0;
unsigned char var_11 = (unsigned char)198;
signed char var_12 = (signed char)-18;
short var_13 = (short)8453;
int var_14 = 1782636196;
unsigned int var_15 = 405658379U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
