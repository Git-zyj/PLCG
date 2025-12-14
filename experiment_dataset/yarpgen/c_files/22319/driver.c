#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25750;
long long int var_2 = -3038109129455838257LL;
int var_3 = -1470234685;
short var_5 = (short)7959;
short var_7 = (short)25676;
short var_9 = (short)26381;
short var_13 = (short)15285;
int zero = 0;
int var_19 = 313258437;
unsigned long long int var_20 = 13765025792873617870ULL;
unsigned int var_21 = 4146701882U;
int var_22 = 1649896699;
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
