#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19951;
signed char var_3 = (signed char)106;
short var_4 = (short)12524;
unsigned long long int var_6 = 13740124447201325779ULL;
long long int var_8 = 3351876702078589745LL;
unsigned short var_10 = (unsigned short)37351;
unsigned short var_11 = (unsigned short)52965;
signed char var_12 = (signed char)96;
unsigned short var_15 = (unsigned short)55536;
unsigned long long int var_16 = 1501134196514990304ULL;
short var_17 = (short)16006;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-1;
int zero = 0;
unsigned short var_20 = (unsigned short)14825;
unsigned short var_21 = (unsigned short)13803;
signed char var_22 = (signed char)0;
void init() {
}

void checksum() {
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
