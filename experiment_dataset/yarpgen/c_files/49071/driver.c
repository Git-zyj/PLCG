#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
short var_3 = (short)21185;
unsigned int var_8 = 1655157463U;
long long int var_11 = 7884154167989718653LL;
unsigned short var_13 = (unsigned short)36023;
long long int var_14 = 4870576297664992462LL;
short var_15 = (short)8242;
short var_18 = (short)-20168;
int zero = 0;
long long int var_19 = 3419643407474822057LL;
unsigned int var_20 = 1544737611U;
int var_21 = -2068799107;
signed char var_22 = (signed char)66;
void init() {
}

void checksum() {
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
