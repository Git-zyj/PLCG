#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)25;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-16;
signed char var_10 = (signed char)-63;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)29853;
signed char var_13 = (signed char)-107;
unsigned long long int var_14 = 9133311143748116102ULL;
signed char var_15 = (signed char)-11;
short var_17 = (short)3076;
int zero = 0;
unsigned int var_18 = 421969912U;
signed char var_19 = (signed char)-50;
int var_20 = 1597802784;
unsigned long long int var_21 = 6221701971255922653ULL;
unsigned long long int var_22 = 18310979175908244651ULL;
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
