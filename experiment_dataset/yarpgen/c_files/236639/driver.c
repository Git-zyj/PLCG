#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30472;
long long int var_1 = -8856192090119873724LL;
signed char var_2 = (signed char)54;
_Bool var_6 = (_Bool)1;
short var_9 = (short)27341;
unsigned short var_10 = (unsigned short)17678;
unsigned char var_13 = (unsigned char)67;
unsigned short var_16 = (unsigned short)64473;
int zero = 0;
short var_17 = (short)-22163;
unsigned short var_18 = (unsigned short)65053;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
