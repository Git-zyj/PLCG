#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30210;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 17063013756595090063ULL;
int var_4 = 1864462772;
int var_6 = -1158659244;
int zero = 0;
unsigned char var_10 = (unsigned char)70;
short var_11 = (short)-25775;
unsigned char var_12 = (unsigned char)115;
int var_13 = -1835490657;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
