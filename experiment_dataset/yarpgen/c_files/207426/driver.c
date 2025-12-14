#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)249;
unsigned char var_12 = (unsigned char)235;
_Bool var_13 = (_Bool)1;
long long int var_19 = 1494378534257222093LL;
int zero = 0;
short var_20 = (short)-13735;
signed char var_21 = (signed char)45;
short var_22 = (short)-15721;
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
