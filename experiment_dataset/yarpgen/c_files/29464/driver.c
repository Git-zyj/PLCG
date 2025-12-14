#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1617426382U;
long long int var_5 = -1275841809454789108LL;
signed char var_19 = (signed char)-102;
int zero = 0;
short var_20 = (short)17545;
unsigned int var_21 = 292066659U;
int var_22 = -1944088779;
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
