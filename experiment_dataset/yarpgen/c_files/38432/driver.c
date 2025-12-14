#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)146;
unsigned char var_2 = (unsigned char)81;
unsigned short var_4 = (unsigned short)8948;
long long int var_9 = 8015873856600814773LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_15 = 747074333;
unsigned char var_16 = (unsigned char)184;
short var_17 = (short)-21540;
short var_18 = (short)24107;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
