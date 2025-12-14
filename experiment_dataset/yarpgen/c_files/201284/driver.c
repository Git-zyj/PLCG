#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)41516;
unsigned char var_4 = (unsigned char)174;
unsigned short var_5 = (unsigned short)27236;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)18897;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)242;
unsigned short var_13 = (unsigned short)1583;
signed char var_15 = (signed char)78;
unsigned short var_16 = (unsigned short)61161;
int zero = 0;
unsigned char var_17 = (unsigned char)166;
unsigned short var_18 = (unsigned short)23559;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
