#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)130;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3839797494U;
unsigned short var_4 = (unsigned short)28182;
int var_5 = -1961416543;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-23449;
int zero = 0;
unsigned int var_10 = 3198939364U;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)32782;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
