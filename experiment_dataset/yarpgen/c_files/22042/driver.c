#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21355;
unsigned short var_3 = (unsigned short)53458;
long long int var_8 = 3456646663496818016LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1893866321U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
