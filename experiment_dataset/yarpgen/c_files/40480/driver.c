#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1403728592352329668LL;
int var_5 = -1833776405;
unsigned char var_6 = (unsigned char)124;
int var_7 = 2133380111;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)16;
unsigned short var_13 = (unsigned short)32822;
int var_14 = -262545994;
int zero = 0;
unsigned int var_15 = 3858453124U;
int var_16 = 301533681;
long long int var_17 = 8502289997230875111LL;
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
