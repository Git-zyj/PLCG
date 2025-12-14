#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-32242;
unsigned char var_5 = (unsigned char)126;
signed char var_6 = (signed char)-121;
unsigned char var_7 = (unsigned char)37;
unsigned int var_10 = 3974127187U;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)609;
signed char var_16 = (signed char)89;
unsigned char var_17 = (unsigned char)152;
int zero = 0;
unsigned short var_19 = (unsigned short)35299;
int var_20 = -1730773819;
void init() {
}

void checksum() {
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
