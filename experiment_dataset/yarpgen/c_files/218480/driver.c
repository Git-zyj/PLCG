#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1464;
unsigned int var_1 = 2778199294U;
unsigned int var_4 = 2940882184U;
int var_5 = 516243007;
unsigned int var_6 = 489906719U;
unsigned short var_7 = (unsigned short)40649;
unsigned int var_8 = 3283423480U;
unsigned short var_9 = (unsigned short)33285;
int var_11 = -1881863428;
short var_12 = (short)-4589;
int zero = 0;
unsigned long long int var_16 = 737923333792206430ULL;
short var_17 = (short)21534;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)7186;
unsigned short var_20 = (unsigned short)37285;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
