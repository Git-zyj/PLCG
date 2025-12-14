#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-28;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 1320673840U;
unsigned char var_10 = (unsigned char)17;
unsigned char var_12 = (unsigned char)82;
unsigned char var_14 = (unsigned char)87;
unsigned short var_15 = (unsigned short)62588;
_Bool var_16 = (_Bool)1;
unsigned int var_18 = 3476482831U;
int zero = 0;
unsigned long long int var_19 = 6376832432015253773ULL;
short var_20 = (short)-26536;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
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
