#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58609;
_Bool var_4 = (_Bool)0;
short var_5 = (short)382;
unsigned int var_6 = 799999589U;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-30485;
int zero = 0;
unsigned char var_12 = (unsigned char)41;
unsigned int var_13 = 334888336U;
unsigned int var_14 = 2901021973U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
