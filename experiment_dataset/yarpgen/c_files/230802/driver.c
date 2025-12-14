#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2129739756;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)36894;
unsigned int var_11 = 1364798767U;
int var_13 = -2123635037;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1761504423U;
int zero = 0;
unsigned char var_19 = (unsigned char)78;
int var_20 = 1148921366;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
