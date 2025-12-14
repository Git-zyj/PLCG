#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10413;
unsigned char var_5 = (unsigned char)241;
_Bool var_8 = (_Bool)0;
long long int var_11 = 5657410669163540913LL;
unsigned long long int var_13 = 15128699037120443153ULL;
long long int var_16 = 8053139570030346691LL;
int zero = 0;
short var_20 = (short)-24297;
short var_21 = (short)-11923;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
