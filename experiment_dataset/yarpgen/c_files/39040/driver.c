#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
signed char var_11 = (signed char)-73;
unsigned int var_12 = 1967190831U;
short var_14 = (short)-32602;
unsigned int var_15 = 2649639653U;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-26088;
int zero = 0;
long long int var_18 = 7711675477336787958LL;
unsigned short var_19 = (unsigned short)21622;
unsigned short var_20 = (unsigned short)10503;
signed char var_21 = (signed char)-104;
int var_22 = -1409414706;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
