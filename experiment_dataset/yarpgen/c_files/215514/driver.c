#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26615;
unsigned char var_4 = (unsigned char)225;
_Bool var_5 = (_Bool)1;
short var_6 = (short)4165;
short var_7 = (short)-25068;
int var_10 = 2065937711;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 97091495U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
