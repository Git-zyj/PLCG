#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13654;
int var_2 = 909987126;
short var_5 = (short)-13268;
short var_7 = (short)-1999;
long long int var_8 = 394663796493611002LL;
long long int var_9 = 4296291658480260692LL;
unsigned char var_10 = (unsigned char)239;
signed char var_11 = (signed char)48;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)25585;
unsigned int var_15 = 150040459U;
short var_16 = (short)-28221;
int zero = 0;
unsigned char var_17 = (unsigned char)15;
_Bool var_18 = (_Bool)1;
int var_19 = -1310054573;
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
