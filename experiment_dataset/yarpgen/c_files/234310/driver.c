#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)43;
short var_1 = (short)24058;
long long int var_2 = 8925849331899827310LL;
unsigned char var_3 = (unsigned char)225;
unsigned short var_4 = (unsigned short)44873;
unsigned char var_5 = (unsigned char)140;
unsigned short var_7 = (unsigned short)21876;
unsigned char var_10 = (unsigned char)102;
unsigned long long int var_12 = 2153878048345661130ULL;
unsigned char var_13 = (unsigned char)4;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)26743;
long long int var_17 = -3796951833721861682LL;
unsigned char var_18 = (unsigned char)97;
_Bool var_19 = (_Bool)1;
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
