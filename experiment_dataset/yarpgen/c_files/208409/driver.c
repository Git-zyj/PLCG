#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57464;
unsigned short var_6 = (unsigned short)52035;
unsigned int var_8 = 207445793U;
signed char var_12 = (signed char)81;
unsigned short var_15 = (unsigned short)7879;
short var_17 = (short)-22242;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -641865477;
unsigned int var_20 = 1381088709U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
