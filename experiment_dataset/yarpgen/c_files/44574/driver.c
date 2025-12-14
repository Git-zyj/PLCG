#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17810;
unsigned short var_2 = (unsigned short)11745;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-11;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_8 = 6939710481989632518LL;
int var_9 = 328500490;
long long int var_10 = 4294130809710179908LL;
unsigned short var_12 = (unsigned short)27505;
int zero = 0;
unsigned int var_14 = 3686093064U;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)2214;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
