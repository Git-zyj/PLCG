#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22300;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)9743;
short var_6 = (short)-31294;
unsigned char var_7 = (unsigned char)48;
unsigned int var_8 = 1979599887U;
unsigned short var_9 = (unsigned short)62919;
int zero = 0;
short var_10 = (short)11001;
short var_11 = (short)19133;
_Bool var_12 = (_Bool)0;
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
