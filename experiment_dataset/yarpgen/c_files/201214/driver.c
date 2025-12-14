#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
unsigned int var_1 = 3699754573U;
short var_2 = (short)-5830;
unsigned char var_3 = (unsigned char)186;
unsigned char var_4 = (unsigned char)43;
unsigned long long int var_5 = 3152843748170312192ULL;
short var_7 = (short)3741;
signed char var_8 = (signed char)-86;
unsigned short var_10 = (unsigned short)6337;
short var_11 = (short)-3446;
long long int var_12 = 3320397621603806460LL;
unsigned char var_13 = (unsigned char)243;
int zero = 0;
unsigned char var_16 = (unsigned char)203;
unsigned int var_17 = 4237072923U;
unsigned short var_18 = (unsigned short)10604;
short var_19 = (short)-13659;
void init() {
}

void checksum() {
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
