#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9541736833591171807ULL;
unsigned long long int var_13 = 16304747236367104688ULL;
unsigned char var_14 = (unsigned char)160;
int zero = 0;
unsigned short var_17 = (unsigned short)63282;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)12008;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
