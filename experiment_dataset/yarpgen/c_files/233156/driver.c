#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7814;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)29515;
long long int var_4 = -5337197152147372674LL;
unsigned long long int var_5 = 11445634140100229162ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)31930;
unsigned long long int var_8 = 14444208138051757734ULL;
unsigned int var_9 = 577268941U;
unsigned int var_10 = 254147644U;
int zero = 0;
unsigned int var_11 = 542625450U;
int var_12 = 159010811;
signed char var_13 = (signed char)-29;
long long int var_14 = 1192828935201602270LL;
short var_15 = (short)-21469;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
