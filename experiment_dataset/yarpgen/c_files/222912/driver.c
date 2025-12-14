#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5274754827593708917LL;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)7127;
unsigned int var_12 = 3470041285U;
int zero = 0;
long long int var_13 = -1433134593044326737LL;
unsigned short var_14 = (unsigned short)31003;
unsigned short var_15 = (unsigned short)55542;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
