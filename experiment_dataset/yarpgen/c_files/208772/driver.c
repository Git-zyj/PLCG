#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1994782670U;
unsigned int var_2 = 1418807037U;
long long int var_5 = 4792186663062988982LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
