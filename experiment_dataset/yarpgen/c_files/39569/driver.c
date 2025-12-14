#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
unsigned char var_1 = (unsigned char)68;
long long int var_7 = 2084618131128500973LL;
int var_8 = -304720566;
unsigned char var_9 = (unsigned char)139;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)219;
int zero = 0;
unsigned int var_15 = 66314172U;
signed char var_16 = (signed char)64;
unsigned char var_17 = (unsigned char)31;
unsigned short var_18 = (unsigned short)45270;
unsigned int var_19 = 1517745772U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
