#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1166196948579155236LL;
unsigned int var_7 = 686088725U;
unsigned char var_16 = (unsigned char)33;
int zero = 0;
long long int var_19 = 1256810783422011165LL;
signed char var_20 = (signed char)104;
unsigned int var_21 = 1438766566U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)151;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
