#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7084;
short var_1 = (short)-17296;
_Bool var_2 = (_Bool)0;
short var_3 = (short)24383;
short var_5 = (short)10976;
short var_6 = (short)-14782;
short var_10 = (short)6499;
short var_11 = (short)19627;
unsigned short var_15 = (unsigned short)19432;
short var_17 = (short)-21505;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 16039270U;
unsigned int var_20 = 2905763982U;
unsigned int var_21 = 1396438786U;
unsigned short var_22 = (unsigned short)30197;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
