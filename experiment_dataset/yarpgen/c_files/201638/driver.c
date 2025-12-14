#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_4 = -3385504389806302658LL;
signed char var_5 = (signed char)-69;
unsigned short var_6 = (unsigned short)63284;
long long int var_7 = -2581195560830497285LL;
signed char var_9 = (signed char)-52;
unsigned short var_11 = (unsigned short)20206;
unsigned char var_12 = (unsigned char)202;
unsigned int var_13 = 1665841289U;
signed char var_15 = (signed char)-106;
int zero = 0;
signed char var_16 = (signed char)-50;
unsigned char var_17 = (unsigned char)185;
short var_18 = (short)29944;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
