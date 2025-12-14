#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6675104117692523414ULL;
long long int var_4 = 996282260147514803LL;
unsigned char var_7 = (unsigned char)157;
long long int var_11 = 6407435022352626138LL;
unsigned char var_12 = (unsigned char)247;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)17080;
long long int var_16 = 2351259497210427279LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
