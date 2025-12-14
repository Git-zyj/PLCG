#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1979479468196778871LL;
long long int var_4 = -7255743340955805427LL;
unsigned int var_5 = 1381997191U;
unsigned short var_6 = (unsigned short)42961;
unsigned char var_7 = (unsigned char)125;
unsigned short var_8 = (unsigned short)19018;
unsigned short var_9 = (unsigned short)1782;
unsigned char var_10 = (unsigned char)99;
int zero = 0;
unsigned short var_11 = (unsigned short)47520;
unsigned int var_12 = 1229365837U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)40527;
unsigned long long int var_15 = 6648782264144675667ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
