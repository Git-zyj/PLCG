#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)35008;
long long int var_8 = 8175021564792687593LL;
long long int var_11 = 2064281895236204777LL;
unsigned short var_13 = (unsigned short)33619;
int zero = 0;
short var_15 = (short)32734;
long long int var_16 = -3614947581352947050LL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-27620;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
