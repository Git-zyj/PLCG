#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1261480894U;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)15007;
signed char var_11 = (signed char)55;
int zero = 0;
long long int var_13 = 6113215264186198879LL;
int var_14 = -887817758;
signed char var_15 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
