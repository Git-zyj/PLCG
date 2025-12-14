#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42313;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-3066;
long long int var_8 = 295462392823753297LL;
short var_10 = (short)-22176;
int zero = 0;
short var_11 = (short)-1550;
unsigned long long int var_12 = 9001745993166179137ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
