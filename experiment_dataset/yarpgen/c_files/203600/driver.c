#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13302;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-28;
signed char var_4 = (signed char)-87;
unsigned int var_7 = 238512112U;
unsigned long long int var_8 = 7037602527714110438ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-7010;
short var_13 = (short)7496;
unsigned long long int var_14 = 6388219794426095407ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)20999;
signed char var_17 = (signed char)-112;
signed char var_18 = (signed char)-54;
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
