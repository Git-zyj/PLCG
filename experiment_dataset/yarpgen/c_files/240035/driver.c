#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_4 = (unsigned char)147;
int var_5 = -1097944243;
int var_6 = 1252240569;
signed char var_7 = (signed char)54;
short var_8 = (short)-19104;
short var_10 = (short)13490;
int zero = 0;
short var_11 = (short)-29799;
unsigned char var_12 = (unsigned char)45;
signed char var_13 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
