#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8445603765243949372LL;
long long int var_5 = -2102264440698939994LL;
short var_7 = (short)21291;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 6904428044457371765ULL;
unsigned long long int var_10 = 3489317450945667496ULL;
short var_13 = (short)-1178;
int zero = 0;
int var_16 = 1768121036;
unsigned long long int var_17 = 10543726265980607092ULL;
short var_18 = (short)-15433;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
