#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2585331226822592629LL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)23941;
_Bool var_10 = (_Bool)1;
short var_11 = (short)27565;
int zero = 0;
unsigned char var_15 = (unsigned char)57;
long long int var_16 = -6194291844819665716LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
