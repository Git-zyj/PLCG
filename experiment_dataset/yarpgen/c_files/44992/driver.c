#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
long long int var_1 = -2099239722781278153LL;
long long int var_3 = -4780360148710466999LL;
unsigned int var_4 = 300602249U;
int var_5 = -1388667267;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
