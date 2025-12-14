#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-80;
long long int var_3 = 9004759409208553010LL;
unsigned char var_6 = (unsigned char)251;
unsigned char var_7 = (unsigned char)161;
unsigned int var_10 = 2725177685U;
long long int var_12 = 5428234219869891794LL;
long long int var_14 = -4573370493136949803LL;
short var_15 = (short)-28597;
unsigned int var_16 = 1283478081U;
int zero = 0;
unsigned int var_17 = 2688356255U;
unsigned int var_18 = 1601237997U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
