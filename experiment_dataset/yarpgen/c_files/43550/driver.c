#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1868565267;
long long int var_3 = -4728971825810445591LL;
unsigned int var_8 = 3522503875U;
unsigned char var_12 = (unsigned char)223;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-28203;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
