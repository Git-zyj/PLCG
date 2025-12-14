#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1971208360;
long long int var_1 = 4881127613360932474LL;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)248;
short var_4 = (short)-13181;
signed char var_7 = (signed char)-113;
int var_8 = -1232412149;
_Bool var_11 = (_Bool)0;
int var_14 = -371422922;
_Bool var_17 = (_Bool)1;
int var_18 = -639207403;
int zero = 0;
short var_19 = (short)-9928;
unsigned short var_20 = (unsigned short)16710;
short var_21 = (short)-11343;
signed char var_22 = (signed char)-118;
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
