#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3008;
_Bool var_1 = (_Bool)1;
short var_3 = (short)4074;
unsigned char var_4 = (unsigned char)133;
short var_6 = (short)-28798;
unsigned int var_9 = 1857800294U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 14809027141717257866ULL;
_Bool var_14 = (_Bool)0;
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
