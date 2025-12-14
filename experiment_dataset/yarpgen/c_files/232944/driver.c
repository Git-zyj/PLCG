#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 287479129U;
int var_3 = 230191734;
signed char var_7 = (signed char)123;
unsigned long long int var_8 = 14922025029755458799ULL;
unsigned long long int var_11 = 2932068404567565916ULL;
short var_12 = (short)3559;
int zero = 0;
unsigned int var_16 = 3792954961U;
unsigned int var_17 = 1475912036U;
void init() {
}

void checksum() {
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
