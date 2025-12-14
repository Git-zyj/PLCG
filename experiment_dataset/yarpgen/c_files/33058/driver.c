#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)53;
short var_6 = (short)31312;
unsigned char var_7 = (unsigned char)235;
unsigned int var_8 = 1274317420U;
long long int var_9 = -3470035328426334828LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)194;
_Bool var_21 = (_Bool)0;
short var_22 = (short)3739;
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
