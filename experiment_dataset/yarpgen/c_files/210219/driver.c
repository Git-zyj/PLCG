#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6922;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
long long int var_5 = 1143811573041844096LL;
unsigned char var_7 = (unsigned char)237;
_Bool var_10 = (_Bool)1;
short var_11 = (short)17346;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-3541;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 1172208451;
unsigned char var_18 = (unsigned char)36;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-48;
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
