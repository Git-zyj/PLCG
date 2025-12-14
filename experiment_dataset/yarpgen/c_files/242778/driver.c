#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6207963945242780200LL;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 1019976915U;
int zero = 0;
long long int var_10 = -2950172289403007367LL;
unsigned char var_11 = (unsigned char)72;
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
