#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3085952863U;
unsigned short var_3 = (unsigned short)30677;
unsigned int var_4 = 3982955993U;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)57;
unsigned char var_7 = (unsigned char)209;
short var_10 = (short)-24875;
unsigned short var_11 = (unsigned short)24170;
unsigned int var_12 = 3727459186U;
int zero = 0;
unsigned int var_14 = 472008880U;
unsigned int var_15 = 3546437261U;
_Bool var_16 = (_Bool)0;
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
