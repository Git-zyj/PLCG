#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8804855682836239004LL;
short var_5 = (short)-11428;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)158;
int var_9 = -1234954307;
unsigned int var_10 = 1520851449U;
unsigned int var_12 = 1604430675U;
signed char var_15 = (signed char)-122;
int zero = 0;
int var_16 = 1036241165;
long long int var_17 = -3139055313132625676LL;
signed char var_18 = (signed char)-55;
unsigned long long int var_19 = 18398869051429956482ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
