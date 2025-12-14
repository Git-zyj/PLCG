#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4208;
unsigned char var_4 = (unsigned char)148;
long long int var_5 = -4978485073819531207LL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-112;
unsigned char var_8 = (unsigned char)121;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)26595;
short var_13 = (short)-26916;
unsigned char var_14 = (unsigned char)10;
short var_16 = (short)-13961;
signed char var_18 = (signed char)-22;
int zero = 0;
signed char var_19 = (signed char)3;
signed char var_20 = (signed char)107;
unsigned int var_21 = 3209581916U;
unsigned char var_22 = (unsigned char)89;
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
