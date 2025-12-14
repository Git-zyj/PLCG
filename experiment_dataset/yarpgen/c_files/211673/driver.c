#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28778;
int var_2 = 1878958858;
unsigned short var_3 = (unsigned short)25240;
short var_5 = (short)6688;
int var_7 = 9716727;
unsigned short var_8 = (unsigned short)35153;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 915478065U;
unsigned long long int var_12 = 6200992723272073991ULL;
unsigned char var_13 = (unsigned char)27;
long long int var_14 = 8755964980307304369LL;
int zero = 0;
unsigned long long int var_15 = 12212098979920282085ULL;
short var_16 = (short)-20508;
unsigned short var_17 = (unsigned short)19255;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
