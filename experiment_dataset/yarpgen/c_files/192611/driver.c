#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15026;
unsigned int var_1 = 150141328U;
unsigned short var_7 = (unsigned short)33863;
unsigned short var_8 = (unsigned short)53910;
short var_11 = (short)6119;
unsigned int var_13 = 540584948U;
unsigned short var_16 = (unsigned short)64873;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 140645629U;
unsigned short var_20 = (unsigned short)48523;
int var_21 = 1835573468;
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
