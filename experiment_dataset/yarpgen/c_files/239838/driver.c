#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
unsigned int var_2 = 2936864748U;
signed char var_4 = (signed char)-11;
unsigned short var_9 = (unsigned short)28971;
short var_11 = (short)-7154;
unsigned char var_12 = (unsigned char)9;
short var_14 = (short)6672;
unsigned int var_16 = 2253968063U;
short var_17 = (short)5830;
unsigned long long int var_18 = 10038794377876311624ULL;
int zero = 0;
int var_19 = -1648199453;
unsigned int var_20 = 416494277U;
unsigned int var_21 = 3222437909U;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)23614;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
