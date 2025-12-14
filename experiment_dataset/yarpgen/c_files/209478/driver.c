#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)237;
unsigned short var_5 = (unsigned short)32848;
short var_7 = (short)-21923;
int var_10 = -1785514350;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 2493308975U;
short var_15 = (short)-13820;
unsigned char var_16 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
