#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -24194240;
signed char var_6 = (signed char)59;
short var_9 = (short)19483;
short var_10 = (short)8838;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)8;
int var_14 = -1486571725;
short var_15 = (short)-2501;
int var_16 = -578131306;
int zero = 0;
signed char var_17 = (signed char)74;
_Bool var_18 = (_Bool)0;
int var_19 = 980932489;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
