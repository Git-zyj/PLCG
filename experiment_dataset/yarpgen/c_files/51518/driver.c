#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9612;
short var_1 = (short)11116;
unsigned char var_3 = (unsigned char)37;
unsigned short var_5 = (unsigned short)22310;
_Bool var_7 = (_Bool)0;
unsigned int var_13 = 3140197072U;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 1065553419U;
signed char var_18 = (signed char)-77;
int zero = 0;
short var_19 = (short)-23619;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)8316;
void init() {
}

void checksum() {
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
