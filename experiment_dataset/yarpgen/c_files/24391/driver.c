#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3850653995032182730LL;
unsigned int var_7 = 2369536503U;
unsigned int var_13 = 2322957384U;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)141;
long long int var_16 = 802977636414724171LL;
int zero = 0;
long long int var_20 = 3419248654099913617LL;
unsigned int var_21 = 621347202U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
