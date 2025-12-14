#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8205995691088569748ULL;
long long int var_5 = 2433800896854545666LL;
unsigned short var_10 = (unsigned short)64145;
unsigned short var_12 = (unsigned short)10626;
unsigned short var_13 = (unsigned short)26681;
unsigned short var_15 = (unsigned short)52266;
int var_17 = -371213332;
int zero = 0;
unsigned short var_19 = (unsigned short)23085;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)26;
unsigned short var_22 = (unsigned short)42247;
short var_23 = (short)772;
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
