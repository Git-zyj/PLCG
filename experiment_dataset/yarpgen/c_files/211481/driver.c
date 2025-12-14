#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10968;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)192;
unsigned int var_13 = 2831731669U;
int zero = 0;
unsigned short var_14 = (unsigned short)8692;
unsigned char var_15 = (unsigned char)226;
_Bool var_16 = (_Bool)1;
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
