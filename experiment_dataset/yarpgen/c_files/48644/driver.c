#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
unsigned char var_1 = (unsigned char)85;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)76;
unsigned int var_5 = 1701116511U;
unsigned short var_6 = (unsigned short)13731;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-68;
unsigned char var_14 = (unsigned char)253;
short var_15 = (short)15775;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
