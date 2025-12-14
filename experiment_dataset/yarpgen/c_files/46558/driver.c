#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1323815107;
long long int var_2 = -5581282364579307142LL;
unsigned long long int var_3 = 4848485435748677019ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1996705318U;
signed char var_8 = (signed char)-116;
signed char var_9 = (signed char)-28;
signed char var_11 = (signed char)-110;
short var_13 = (short)-21063;
unsigned char var_16 = (unsigned char)2;
int zero = 0;
short var_18 = (short)20687;
unsigned short var_19 = (unsigned short)4773;
long long int var_20 = -8827978683484733717LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
