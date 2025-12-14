#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1353235893U;
short var_3 = (short)5393;
int var_5 = 1342637686;
unsigned short var_7 = (unsigned short)43083;
unsigned int var_14 = 3099009255U;
short var_15 = (short)-20392;
unsigned short var_16 = (unsigned short)35631;
int zero = 0;
unsigned char var_18 = (unsigned char)133;
int var_19 = 1689156947;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)54998;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
