#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1101713103U;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_11 = -3624469633559842323LL;
signed char var_14 = (signed char)33;
signed char var_16 = (signed char)-125;
int zero = 0;
int var_20 = 169230119;
signed char var_21 = (signed char)15;
signed char var_22 = (signed char)61;
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
