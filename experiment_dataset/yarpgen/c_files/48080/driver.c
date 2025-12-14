#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12911;
long long int var_3 = 6687542203650315400LL;
signed char var_4 = (signed char)-54;
unsigned char var_7 = (unsigned char)48;
_Bool var_8 = (_Bool)1;
int var_9 = -127574848;
long long int var_10 = 4233591341124945566LL;
int var_11 = 910327830;
short var_12 = (short)-8270;
signed char var_15 = (signed char)-25;
long long int var_17 = 4558325539385514785LL;
signed char var_18 = (signed char)14;
int zero = 0;
int var_19 = 563559668;
int var_20 = 637452448;
unsigned int var_21 = 875628423U;
short var_22 = (short)-9280;
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
