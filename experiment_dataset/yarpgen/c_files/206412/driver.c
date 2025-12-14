#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24124;
unsigned short var_3 = (unsigned short)18225;
unsigned short var_7 = (unsigned short)15137;
unsigned char var_8 = (unsigned char)248;
unsigned short var_11 = (unsigned short)31832;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)54376;
short var_15 = (short)-1660;
int var_16 = -2039059009;
unsigned int var_18 = 3211835490U;
int zero = 0;
int var_19 = 578469478;
unsigned short var_20 = (unsigned short)25284;
_Bool var_21 = (_Bool)0;
int var_22 = -492991497;
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
