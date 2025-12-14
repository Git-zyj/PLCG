#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55200;
unsigned short var_2 = (unsigned short)41164;
signed char var_5 = (signed char)-110;
signed char var_6 = (signed char)-1;
unsigned long long int var_8 = 9908412815069602251ULL;
unsigned char var_10 = (unsigned char)100;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)21462;
int var_15 = -917541206;
short var_16 = (short)-5700;
unsigned long long int var_17 = 7377788568456310516ULL;
unsigned short var_18 = (unsigned short)7135;
int zero = 0;
unsigned int var_19 = 41004712U;
signed char var_20 = (signed char)-46;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)55908;
unsigned char var_23 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
