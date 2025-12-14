#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)58;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)44158;
int zero = 0;
long long int var_12 = -545172736909331653LL;
short var_13 = (short)-23730;
long long int var_14 = 8426160221546019066LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
