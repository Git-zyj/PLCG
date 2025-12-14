#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8934028081489585051LL;
long long int var_4 = 1391560886544509908LL;
unsigned short var_6 = (unsigned short)5960;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 3112910516U;
int zero = 0;
unsigned int var_12 = 2495565101U;
int var_13 = 1456695778;
signed char var_14 = (signed char)-16;
unsigned char var_15 = (unsigned char)153;
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
