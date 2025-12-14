#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42629;
unsigned long long int var_7 = 13516369021600053671ULL;
unsigned long long int var_8 = 11542393535904912468ULL;
short var_13 = (short)5925;
unsigned char var_16 = (unsigned char)126;
int var_17 = -1015486622;
short var_18 = (short)-18043;
unsigned long long int var_19 = 8123787254105740819ULL;
int zero = 0;
long long int var_20 = -4308926664260207273LL;
unsigned short var_21 = (unsigned short)51585;
unsigned char var_22 = (unsigned char)201;
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
