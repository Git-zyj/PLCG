#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_4 = (unsigned short)50081;
unsigned short var_5 = (unsigned short)3941;
signed char var_8 = (signed char)-97;
unsigned int var_10 = 1623832435U;
signed char var_14 = (signed char)-40;
signed char var_15 = (signed char)-49;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5997483270224380420LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
