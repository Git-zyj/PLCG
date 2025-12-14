#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19466;
int var_2 = 289067961;
int var_5 = -951234854;
unsigned char var_6 = (unsigned char)52;
int var_8 = 1960737455;
unsigned char var_9 = (unsigned char)239;
int var_13 = -1794544700;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 5358363642795761514ULL;
short var_17 = (short)28906;
void init() {
}

void checksum() {
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
