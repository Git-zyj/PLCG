#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-3179;
long long int var_8 = -8831876328364054547LL;
unsigned short var_11 = (unsigned short)46117;
long long int var_14 = 1146634226672694028LL;
short var_17 = (short)29385;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)25621;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
