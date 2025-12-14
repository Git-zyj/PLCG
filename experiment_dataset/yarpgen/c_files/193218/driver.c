#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)143;
short var_11 = (short)15503;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 11036301481610111278ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -8743724235171798418LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
