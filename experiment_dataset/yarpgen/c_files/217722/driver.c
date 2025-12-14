#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3226;
unsigned int var_3 = 1087584527U;
unsigned short var_4 = (unsigned short)13260;
unsigned short var_7 = (unsigned short)59119;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_11 = 1300496967488529987LL;
_Bool var_12 = (_Bool)1;
int var_13 = 681459113;
signed char var_14 = (signed char)30;
unsigned int var_15 = 841537125U;
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
