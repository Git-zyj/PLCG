#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3268455046U;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)64;
unsigned char var_4 = (unsigned char)49;
unsigned short var_5 = (unsigned short)58898;
long long int var_6 = 7022772444313883892LL;
int var_7 = 1723286221;
long long int var_9 = -7558653071114388617LL;
unsigned int var_11 = 1022913665U;
int zero = 0;
unsigned short var_12 = (unsigned short)19071;
long long int var_13 = -2788011379172427375LL;
signed char var_14 = (signed char)100;
long long int var_15 = 2826685217214030032LL;
void init() {
}

void checksum() {
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
