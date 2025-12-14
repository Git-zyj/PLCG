#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7600366324760837055LL;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)4;
unsigned short var_4 = (unsigned short)2763;
unsigned char var_6 = (unsigned char)60;
unsigned char var_7 = (unsigned char)67;
long long int var_8 = -7049464920697661504LL;
long long int var_11 = 6950684818043366683LL;
short var_12 = (short)30588;
unsigned long long int var_13 = 5656144030240800272ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-49;
unsigned short var_17 = (unsigned short)15438;
int zero = 0;
long long int var_18 = 1012914471903840460LL;
long long int var_19 = -1386927559581550473LL;
signed char var_20 = (signed char)-34;
short var_21 = (short)29511;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
