#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2173892534421241306LL;
unsigned char var_2 = (unsigned char)29;
signed char var_4 = (signed char)-67;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_12 = (unsigned short)43796;
unsigned long long int var_14 = 5140287479987213549ULL;
_Bool var_16 = (_Bool)0;
int var_18 = -712590121;
int zero = 0;
unsigned int var_20 = 3305538101U;
unsigned char var_21 = (unsigned char)37;
unsigned char var_22 = (unsigned char)13;
unsigned long long int var_23 = 8266817048854584088ULL;
void init() {
}

void checksum() {
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
