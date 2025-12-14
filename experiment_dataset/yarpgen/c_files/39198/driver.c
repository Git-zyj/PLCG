#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
unsigned short var_4 = (unsigned short)54281;
short var_5 = (short)-31559;
unsigned char var_8 = (unsigned char)244;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)20996;
unsigned short var_12 = (unsigned short)40993;
unsigned short var_13 = (unsigned short)64191;
unsigned long long int var_16 = 12655936852886949993ULL;
int zero = 0;
unsigned int var_17 = 3226576418U;
unsigned char var_18 = (unsigned char)98;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)3530;
unsigned int var_21 = 1211372099U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
