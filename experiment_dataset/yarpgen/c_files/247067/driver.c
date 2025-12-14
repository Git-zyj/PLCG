#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)74;
unsigned char var_6 = (unsigned char)248;
short var_9 = (short)6842;
unsigned short var_12 = (unsigned short)62269;
unsigned long long int var_18 = 15060265566252954026ULL;
int zero = 0;
short var_20 = (short)1765;
unsigned long long int var_21 = 13883024897943045923ULL;
unsigned short var_22 = (unsigned short)57218;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
