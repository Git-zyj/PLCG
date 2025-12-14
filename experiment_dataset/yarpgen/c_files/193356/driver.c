#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20353;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2592297250U;
signed char var_4 = (signed char)36;
short var_5 = (short)-7129;
unsigned int var_6 = 2822838286U;
unsigned int var_7 = 57434060U;
unsigned long long int var_8 = 3750567945834875847ULL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-52;
short var_13 = (short)-25622;
unsigned long long int var_15 = 6714383826430731710ULL;
unsigned char var_16 = (unsigned char)90;
unsigned short var_17 = (unsigned short)42747;
unsigned long long int var_18 = 13218782551305140849ULL;
int zero = 0;
unsigned int var_19 = 1983702451U;
signed char var_20 = (signed char)52;
_Bool var_21 = (_Bool)1;
long long int var_22 = 105807206115108758LL;
unsigned int var_23 = 3396483876U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
