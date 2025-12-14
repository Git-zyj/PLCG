#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6520343027542698673LL;
unsigned long long int var_3 = 10287637030013682878ULL;
long long int var_6 = 1430807720047153652LL;
unsigned char var_8 = (unsigned char)198;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3045644478U;
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
