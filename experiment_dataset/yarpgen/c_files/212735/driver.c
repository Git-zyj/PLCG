#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
unsigned int var_3 = 2932967239U;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)124;
long long int var_6 = -1044598638103730211LL;
unsigned char var_7 = (unsigned char)110;
signed char var_9 = (signed char)103;
signed char var_10 = (signed char)65;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)234;
int var_13 = 1294991475;
short var_15 = (short)17877;
signed char var_16 = (signed char)44;
int var_17 = -1959229656;
unsigned short var_18 = (unsigned short)30131;
int zero = 0;
unsigned char var_20 = (unsigned char)37;
unsigned char var_21 = (unsigned char)177;
unsigned short var_22 = (unsigned short)24337;
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
