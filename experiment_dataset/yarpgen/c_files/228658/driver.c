#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)65;
long long int var_7 = -6980085683291826425LL;
short var_10 = (short)16709;
long long int var_12 = -8717245689993548992LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)254;
long long int var_22 = -1771496802573596643LL;
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
