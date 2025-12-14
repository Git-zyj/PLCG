#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 184007060;
short var_1 = (short)-562;
unsigned char var_2 = (unsigned char)55;
unsigned char var_3 = (unsigned char)165;
long long int var_4 = 927630285446876125LL;
int var_5 = -1586183320;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)248;
unsigned short var_11 = (unsigned short)37245;
signed char var_12 = (signed char)70;
unsigned int var_13 = 934389243U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
