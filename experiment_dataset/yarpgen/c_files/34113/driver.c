#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7179594842568249805ULL;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-4;
unsigned short var_4 = (unsigned short)44312;
_Bool var_5 = (_Bool)0;
short var_6 = (short)28699;
signed char var_7 = (signed char)-31;
signed char var_8 = (signed char)9;
unsigned short var_9 = (unsigned short)44388;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)-3795;
unsigned short var_16 = (unsigned short)34627;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)63041;
unsigned long long int var_19 = 5997367690339697460ULL;
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
