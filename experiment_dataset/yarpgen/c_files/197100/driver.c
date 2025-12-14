#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6765;
unsigned long long int var_5 = 5244917174423367457ULL;
unsigned int var_8 = 525689145U;
unsigned char var_14 = (unsigned char)18;
unsigned int var_15 = 3765610047U;
int var_16 = 238857276;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)-30958;
unsigned short var_20 = (unsigned short)2147;
unsigned long long int var_21 = 14676566871918871363ULL;
unsigned long long int var_22 = 16721303529590096469ULL;
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
