#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)132;
unsigned short var_3 = (unsigned short)64457;
_Bool var_4 = (_Bool)0;
short var_9 = (short)32200;
int var_11 = -1481182578;
signed char var_12 = (signed char)-12;
unsigned char var_13 = (unsigned char)108;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = -2045432592;
signed char var_17 = (signed char)110;
unsigned short var_18 = (unsigned short)11745;
unsigned short var_19 = (unsigned short)58199;
unsigned short var_20 = (unsigned short)48213;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
