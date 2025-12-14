#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 211243262U;
long long int var_1 = -1964152099548134343LL;
_Bool var_3 = (_Bool)0;
short var_6 = (short)-4037;
int var_8 = -795552519;
long long int var_9 = 5264312080124009238LL;
unsigned int var_10 = 3540990990U;
signed char var_11 = (signed char)80;
int zero = 0;
short var_12 = (short)-3774;
long long int var_13 = 7256853652628620450LL;
unsigned short var_14 = (unsigned short)20878;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
