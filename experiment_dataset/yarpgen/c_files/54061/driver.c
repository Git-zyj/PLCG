#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31490;
short var_2 = (short)21014;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-62;
unsigned int var_5 = 1542558970U;
unsigned int var_6 = 2114819317U;
short var_7 = (short)29538;
unsigned int var_9 = 522324543U;
unsigned long long int var_10 = 13238986932137610722ULL;
int zero = 0;
unsigned int var_11 = 2028138468U;
unsigned int var_12 = 1079238271U;
short var_13 = (short)-29504;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
