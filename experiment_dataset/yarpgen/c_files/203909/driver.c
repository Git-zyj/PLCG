#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1881648055U;
unsigned char var_5 = (unsigned char)251;
unsigned int var_7 = 3465503408U;
int var_9 = 1618099904;
short var_10 = (short)-14404;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)59435;
unsigned int var_14 = 3842163493U;
int var_15 = 930394052;
unsigned short var_16 = (unsigned short)17503;
unsigned char var_17 = (unsigned char)113;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
