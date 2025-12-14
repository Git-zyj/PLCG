#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1973763254U;
int var_2 = 1099701891;
unsigned int var_3 = 2704942513U;
_Bool var_5 = (_Bool)0;
int var_6 = 2062224733;
signed char var_8 = (signed char)37;
short var_9 = (short)29479;
unsigned char var_11 = (unsigned char)204;
int var_14 = -1812291260;
unsigned char var_15 = (unsigned char)162;
unsigned int var_16 = 3205610895U;
int zero = 0;
unsigned int var_18 = 3510943540U;
unsigned short var_19 = (unsigned short)31447;
unsigned int var_20 = 763029499U;
unsigned short var_21 = (unsigned short)28788;
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
