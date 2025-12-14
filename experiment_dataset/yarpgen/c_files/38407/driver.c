#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4647;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)62;
signed char var_6 = (signed char)62;
short var_10 = (short)23173;
signed char var_12 = (signed char)-101;
int zero = 0;
signed char var_15 = (signed char)72;
unsigned long long int var_16 = 4597633768463981371ULL;
short var_17 = (short)17994;
unsigned long long int var_18 = 14383544490873296735ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
