#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
signed char var_1 = (signed char)37;
unsigned char var_3 = (unsigned char)157;
unsigned int var_4 = 1120992674U;
unsigned short var_5 = (unsigned short)43500;
unsigned short var_6 = (unsigned short)48919;
short var_7 = (short)-13351;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)83;
short var_13 = (short)26478;
int zero = 0;
long long int var_15 = -4675953719432922544LL;
short var_16 = (short)3451;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
