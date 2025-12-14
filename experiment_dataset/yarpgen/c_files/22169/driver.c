#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)145;
unsigned int var_6 = 1167823777U;
unsigned char var_7 = (unsigned char)52;
short var_8 = (short)7838;
short var_9 = (short)-456;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 3068810069U;
unsigned short var_13 = (unsigned short)15148;
unsigned int var_14 = 576641079U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
