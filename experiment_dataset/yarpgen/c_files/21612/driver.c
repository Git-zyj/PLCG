#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4919057602733956276ULL;
unsigned int var_1 = 332905414U;
_Bool var_2 = (_Bool)1;
int var_5 = -1444424595;
short var_7 = (short)1173;
unsigned char var_8 = (unsigned char)206;
unsigned long long int var_9 = 1513237521704306442ULL;
unsigned long long int var_10 = 11603414998419036019ULL;
signed char var_12 = (signed char)45;
int zero = 0;
int var_13 = -565181925;
short var_14 = (short)-3971;
unsigned char var_15 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
