#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2292847870713807082LL;
_Bool var_2 = (_Bool)1;
short var_7 = (short)-1771;
int zero = 0;
unsigned int var_13 = 3008377334U;
unsigned short var_14 = (unsigned short)53172;
long long int var_15 = -4000934349885645174LL;
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
