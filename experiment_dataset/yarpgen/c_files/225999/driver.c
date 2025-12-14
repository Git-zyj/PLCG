#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36238;
unsigned char var_10 = (unsigned char)146;
short var_11 = (short)21453;
long long int var_14 = 5529725787709495808LL;
int zero = 0;
short var_20 = (short)-20532;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)64281;
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
