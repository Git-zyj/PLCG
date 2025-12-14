#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)33;
long long int var_8 = 735343522335884567LL;
short var_9 = (short)12874;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_20 = -222718580;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)26518;
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
