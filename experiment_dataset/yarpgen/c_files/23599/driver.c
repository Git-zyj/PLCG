#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10373;
unsigned int var_3 = 2708369224U;
unsigned long long int var_4 = 1981479294202984799ULL;
short var_6 = (short)12477;
signed char var_8 = (signed char)94;
signed char var_10 = (signed char)-56;
int var_11 = -1295425139;
unsigned short var_13 = (unsigned short)44606;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 5599375641904036139LL;
unsigned long long int var_16 = 8844757787876891084ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
