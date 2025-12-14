#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12724;
unsigned int var_3 = 848645851U;
unsigned char var_4 = (unsigned char)61;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)49;
unsigned int var_9 = 938785316U;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2561431958U;
short var_14 = (short)-93;
unsigned short var_15 = (unsigned short)59278;
int var_16 = 134249442;
unsigned long long int var_17 = 3100614660186974894ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
