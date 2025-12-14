#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59328;
short var_1 = (short)18195;
unsigned long long int var_8 = 12563256862240713188ULL;
_Bool var_9 = (_Bool)0;
int var_10 = 1416617624;
unsigned short var_12 = (unsigned short)36300;
unsigned int var_13 = 2980546046U;
unsigned int var_14 = 3546764172U;
int zero = 0;
unsigned short var_20 = (unsigned short)52770;
unsigned char var_21 = (unsigned char)251;
void init() {
}

void checksum() {
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
